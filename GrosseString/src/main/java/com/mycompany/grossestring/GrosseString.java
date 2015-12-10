/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.grossestring;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author sintef
 */
public class GrosseString {

    /**
     * @param args the command line arguments
     */
    public static void printUsage() {
        System.out.println("GrosseString modelFile instanceFile [outputDir]");
    }
    
    public static void readModel(String modelFile, StringBuilder builder) {
        String myModel;
        try(BufferedReader br = new BufferedReader(new FileReader(modelFile))) {
            StringBuilder sb = new StringBuilder();
            String line = br.readLine();

            while (line != null) {
                sb.append(line);
                sb.append(System.lineSeparator());
                line = br.readLine();
            }
            myModel = sb.toString();
        } catch (Exception ex) {
            myModel = "";
            System.out.println("Error while reading model file.");
        }
        myModel = myModel.replaceAll("[\r\n]+", "");
        
        builder.append("\n");
        builder.append("// MODEL\n");
        
        int decalage = 0;
        for(int i = 0; i < (myModel.length() / 31); i++){
            if(myModel.charAt((i+1)*31-decalage-1) == '\\'){
                builder.append("const PROGMEM char modelPart" + i + "[] = \"" + myModel.substring(i*31-decalage, (i+1)*31-decalage-1) + "\";");
                builder.append("\n");
                decalage++;
            } else {
                builder.append("const PROGMEM char modelPart" + i + "[] = \"" + myModel.substring(i*31-decalage, (i+1)*31-decalage) + "\";");
                builder.append("\n");
            }
        }
        builder.append("const PROGMEM char modelPart" + (myModel.length() / 31) + "[] = \"" + myModel.substring((myModel.length() / 31)*31) + "\";");
        builder.append("\n");
        
       
        builder.append("const char* const model[] PROGMEM = {");
        for(int j = 0; j <= (myModel.length() / 31); j++) {
            if(j > 0)
                builder.append(", ");
            builder.append("modelPart" + j);
        }
        builder.append("};\n");
        builder.append("\n");
        
        builder.append("void printModel() {\n" +
        "for (int i = 0; i <= " + (myModel.length() / 31) + "; i++) {\n" +
        "    strcpy_P(buf, (char*)pgm_read_word(&(model[i]))); \n" +
        "    Serial.println(buf);\n" +
        "    //delay(500);\n" +
        "  }\n" +
        "}\n\n");
    }
    
    public static void readInstance(String instanceFile, StringBuilder builder) {
        String myInstance;
        try(BufferedReader br = new BufferedReader(new FileReader(instanceFile))) {
            StringBuilder sb = new StringBuilder();
            String line = br.readLine();

            while (line != null) {
                sb.append(line);
                sb.append(System.lineSeparator());
                line = br.readLine();
            }
            myInstance = sb.toString();
        } catch (Exception ex) {
            myInstance = "";
            System.out.println("Error while reading instance file.");
        }
        
        myInstance = myInstance.replaceAll("[\r\n]+", "");
        builder.append("\n");
        builder.append("// INSTANCE GRAPHE\n");
        
        int decalage = 0;
        for(int i = 0; i < (myInstance.length() / 31); i++){
            if(myInstance.charAt((i+1)*31-decalage-1) == '\\'){
                builder.append("const PROGMEM char instancePart" + i + "[] = \"" + myInstance.substring(i*31-decalage, (i+1)*31-decalage-1) + "\";");
                builder.append("\n");
                decalage++;
            } else {
                builder.append("const PROGMEM char instancePart" + i + "[] = \"" + myInstance.substring(i*31-decalage, (i+1)*31-decalage) + "\";");
                builder.append("\n");
            }
        }
        builder.append("const PROGMEM char instancePart" + (myInstance.length() / 31) + "[] = \"" + myInstance.substring((myInstance.length() / 31)*31) + "\";");
        builder.append("\n");
        
       
        builder.append("const char* const instance[] PROGMEM = {");
        for(int j = 0; j <= (myInstance.length() / 31); j++) {
            if(j > 0)
                builder.append(", ");
            builder.append("instancePart" + j);
        }
        builder.append("};\n");
        builder.append("\n");
        
        builder.append("void printInstance() {\n" +
        "for (int i = 0; i <= " + (myInstance.length() / 31) + "; i++) {\n" +
        "    strcpy_P(buf, (char*)pgm_read_word(&(instance[i]))); \n" +
        "    Serial.println(buf);\n" +
        "    //delay(500);\n" +
        "  }\n" +
        "}\n\n");
    }
    
    public static void generateCore(StringBuilder builder, String modelFile, String instanceFile) {
        
        builder.append("#include <avr/pgmspace.h>\n\n");
        builder.append("char buf[32];\n\n");
        
        readModel(modelFile, builder);
        readInstance(instanceFile, builder);
        
        builder.append("void clearSerialBuffer() {\n" +
        "    while(Serial.read() > 0){\n" +
        "      Serial.read();\n" +
        "    }\n" +
        "}\n" +
        "boolean readStr(String str) {\n" +
        "  boolean res = true;\n" +
        "  for(int i = 0; i < str.length();i++){\n" +
        "    res |= (Serial.read() == str[i]);\n" +
        "  }\n" +
        "}\n" +
        "\n" +
        "void setup()  \n" +
        "{\n" +
        "  Serial.begin(115200);\n" +
        "  Serial.println(\"Init\");\n" +
        "}\n" +
        "\n" +
        "void loop() // run over and over\n" +
        "{\n" +
        "  if (Serial.available() >= 8) {\n" +
        "    if(readStr(\"get\")) {\n" +
        "      char test = Serial.read();\n" +
        "      if(test == 'M') {\n" +
        "        if(readStr(\"odel\")) {\n" +
        "          printModel();\n" +
        "        } else {\n" +
        "          Serial.println(\"ERROR\");\n" +
        "          clearSerialBuffer();\n" +
        "        }\n" +
        "      } else if(test == 'I') {\n" +
        "        if(readStr(\"nstance\")) {\n" +
        "          printInstance();\n" +
        "          clearSerialBuffer();\n" +
        "        } else {\n" +
        "          Serial.println(\"ERROR\");\n" +
        "          clearSerialBuffer();\n" +
        "        }\n" +
        "      } else {\n" +
        "        Serial.println(\"ERROR\");\n" +
        "        clearSerialBuffer();\n" +
        "      }\n" +
        "    } else {\n" +
        "        Serial.println(\"ERROR\");\n" +
        "        clearSerialBuffer();\n" +
        "      }\n" +
        "  }\n" +
        "    \n" +
        "}\n");
    }
    
    
    public static void writeTextFile(String outputDir, String content) {
        try {
            File file = new File(outputDir, "kevduinoTest.ino");
            if (!file.getParentFile().exists())
                file.getParentFile().mkdirs();
            PrintWriter w = new PrintWriter(file);
            w.print(content);
            w.close();
        } catch (Exception ex) {
            System.err.println("Problem while dumping the code");
            ex.printStackTrace();
        }
    }
    
    public static void main(String[] args) {
        StringBuilder builder = new StringBuilder();
        String modelFile = "", instanceFile = "", outputDir = "";
        boolean ok = false;
        if(args.length == 2) {
            modelFile = args[0];
            instanceFile = args[1];
            outputDir = ".";
            ok = true;
        } else {
            if (args.length == 3){
                modelFile = args[0];
                instanceFile = args[1];
                outputDir = args[2];
            ok = true;
            } else {
                System.out.print("args:{");
                for(String s : args) {
                    System.out.print(s + " ");
                }
                System.out.println("}");
                printUsage();
            }
        }
            //|| (args.length != 3))
        if(ok) {
            generateCore(builder, modelFile, instanceFile);
            //System.out.print(builder);
            writeTextFile(outputDir, builder.toString());
        }
        
    }
   
}