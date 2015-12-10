#include <avr/pgmspace.h>

char buf[32];


// MODEL
const PROGMEM char modelPart0[] = "{\"class\":\"org.kevoree.Contai";
const PROGMEM char modelPart1[] = "nerRoot@0.818745837779715714496";
const PROGMEM char modelPart2[] = "63371208\",\"generated_KMF_ID\"";
const PROGMEM char modelPart3[] = ":\"0.81874583777971571449663371";
const PROGMEM char modelPart4[] = "208\",\"nodes\":[],\"repositori";
const PROGMEM char modelPart5[] = "es\":[],\"hubs\":[],\"mBindings";
const PROGMEM char modelPart6[] = "\":[],\"groups\":[],\"packages";
const PROGMEM char modelPart7[] = "\":[{\"class\":\"org.kevoree.Pa";
const PROGMEM char modelPart8[] = "ckage@eu\",\"name\":\"eu\",\"pa";
const PROGMEM char modelPart9[] = "ckages\":[{\"class\":\"org.kevo";
const PROGMEM char modelPart10[] = "ree.Package@heads\",\"name\":\"";
const PROGMEM char modelPart11[] = "heads\",\"packages\":[],\"typeD";
const PROGMEM char modelPart12[] = "efinitions\":[{\"class\":\"org.";
const PROGMEM char modelPart13[] = "kevoree.NodeType@name=ArduinoNo";
const PROGMEM char modelPart14[] = "de,version=1.0.0\",\"name\":\"A";
const PROGMEM char modelPart15[] = "rduinoNode\",\"abstract\":\"fal";
const PROGMEM char modelPart16[] = "se\",\"version\":\"1.0.0\",\"de";
const PROGMEM char modelPart17[] = "ployUnits\":[\"packages[eu]/pac";
const PROGMEM char modelPart18[] = "kages[heads]/deployUnits[hashco";
const PROGMEM char modelPart19[] = "de=,name=ArduinoNode,version=1.";
const PROGMEM char modelPart20[] = "0.0]\"],\"superTypes\":[],\"dic";
const PROGMEM char modelPart21[] = "tionaryType\":[{\"class\":\"org";
const PROGMEM char modelPart22[] = ".kevoree.DictionaryType@0.49977";
const PROGMEM char modelPart23[] = "423623204231449658269047\",\"ge";
const PROGMEM char modelPart24[] = "nerated_KMF_ID\":\"0.4997742362";
const PROGMEM char modelPart25[] = "3204231449658269047\",\"attribu";
const PROGMEM char modelPart26[] = "tes\":[{\"class\":\"org.kevoree";
const PROGMEM char modelPart27[] = ".DictionaryAttribute@serialPort";
const PROGMEM char modelPart28[] = "\",\"datatype\":\"STRING\",\"de";
const PROGMEM char modelPart29[] = "faultValue\":\"/dev/serial\",\"";
const PROGMEM char modelPart30[] = "name\":\"serialPort\",\"fragmen";
const PROGMEM char modelPart31[] = "tDependant\":\"false\",\"option";
const PROGMEM char modelPart32[] = "al\":\"true\",\"state\":\"false";
const PROGMEM char modelPart33[] = "\",\"genericTypes\":[]}]}],\"me";
const PROGMEM char modelPart34[] = "taData\":[]},{\"class\":\"org.k";
const PROGMEM char modelPart35[] = "evoree.ChannelType@name=Arduino";
const PROGMEM char modelPart36[] = "Channel,version=1.0.0\",\"upper";
const PROGMEM char modelPart37[] = "Fragments\":\"0\",\"name\":\"Ar";
const PROGMEM char modelPart38[] = "duinoChannel\",\"abstract\":\"f";
const PROGMEM char modelPart39[] = "alse\",\"lowerBindings\":\"0\",";
const PROGMEM char modelPart40[] = "\"version\":\"1.0.0\",\"lowerFr";
const PROGMEM char modelPart41[] = "agments\":\"0\",\"upperBindings";
const PROGMEM char modelPart42[] = "\":\"0\",\"deployUnits\":[\"pac";
const PROGMEM char modelPart43[] = "kages[eu]/packages[heads]/deplo";
const PROGMEM char modelPart44[] = "yUnits[hashcode=,name=ArduinoCh";
const PROGMEM char modelPart45[] = "annel,version=1.0.0]\"],\"super";
const PROGMEM char modelPart46[] = "Types\":[],\"dictionaryType\":[";
const PROGMEM char modelPart47[] = "{\"class\":\"org.kevoree.Dictio";
const PROGMEM char modelPart48[] = "naryType@0.84985279757529514496";
const PROGMEM char modelPart49[] = "63371226\",\"generated_KMF_ID\"";
const PROGMEM char modelPart50[] = ":\"0.84985279757529514496633712";
const PROGMEM char modelPart51[] = "26\",\"attributes\":[]}],\"meta";
const PROGMEM char modelPart52[] = "Data\":[]},{\"class\":\"org.kev";
const PROGMEM char modelPart53[] = "oree.ComponentType@name=Arduino";
const PROGMEM char modelPart54[] = "DigitalInput,version=1.0.0\",\"";
const PROGMEM char modelPart55[] = "name\":\"ArduinoDigitalInput\",";
const PROGMEM char modelPart56[] = "\"abstract\":\"false\",\"versio";
const PROGMEM char modelPart57[] = "n\":\"1.0.0\",\"deployUnits\":[";
const PROGMEM char modelPart58[] = "\"packages[eu]/packages[heads]/";
const PROGMEM char modelPart59[] = "deployUnits[hashcode=,name=Ardu";
const PROGMEM char modelPart60[] = "inoDigitalInput,version=1.0.0]";
const PROGMEM char modelPart61[] = "\"],\"superTypes\":[],\"diction";
const PROGMEM char modelPart62[] = "aryType\":[{\"class\":\"org.kev";
const PROGMEM char modelPart63[] = "oree.DictionaryType@0.552470312";
const PROGMEM char modelPart64[] = "22097581449655951510\",\"genera";
const PROGMEM char modelPart65[] = "ted_KMF_ID\":\"0.55247031222097";
const PROGMEM char modelPart66[] = "581449655951510\",\"attributes";
const PROGMEM char modelPart67[] = "\":[{\"class\":\"org.kevoree.Di";
const PROGMEM char modelPart68[] = "ctionaryAttribute@pin\",\"datat";
const PROGMEM char modelPart69[] = "ype\":\"INT\",\"defaultValue\":";
const PROGMEM char modelPart70[] = "\"13\",\"name\":\"pin\",\"fragm";
const PROGMEM char modelPart71[] = "entDependant\":\"false\",\"opti";
const PROGMEM char modelPart72[] = "onal\":\"true\",\"state\":\"fal";
const PROGMEM char modelPart73[] = "se\",\"genericTypes\":[]}]}],\"";
const PROGMEM char modelPart74[] = "metaData\":[],\"required\":[],";
const PROGMEM char modelPart75[] = "\"provided\":[{\"class\":\"org.";
const PROGMEM char modelPart76[] = "kevoree.PortTypeRef@off\",\"noD";
const PROGMEM char modelPart77[] = "ependency\":\"false\",\"name\":";
const PROGMEM char modelPart78[] = "\"off\",\"optional\":\"false\",";
const PROGMEM char modelPart79[] = "\"ref\":[],\"mappings\":[]},{\"";
const PROGMEM char modelPart80[] = "class\":\"org.kevoree.PortTypeR";
const PROGMEM char modelPart81[] = "ef@on\",\"noDependency\":\"fals";
const PROGMEM char modelPart82[] = "e\",\"name\":\"on\",\"optional";
const PROGMEM char modelPart83[] = "\":\"false\",\"ref\":[],\"mappi";
const PROGMEM char modelPart84[] = "ngs\":[]}]}],\"deployUnits\":[{";
const PROGMEM char modelPart85[] = "\"class\":\"org.kevoree.DeployU";
const PROGMEM char modelPart86[] = "nit@hashcode=,name=ArduinoDigit";
const PROGMEM char modelPart87[] = "alInput,version=1.0.0\",\"hashc";
const PROGMEM char modelPart88[] = "ode\":\"\",\"name\":\"ArduinoDi";
const PROGMEM char modelPart89[] = "gitalInput\",\"version\":\"1.0.";
const PROGMEM char modelPart90[] = "0\",\"url\":\"\",\"requiredLibs";
const PROGMEM char modelPart91[] = "\":[],\"filters\":[{\"class\":";
const PROGMEM char modelPart92[] = "\"org.kevoree.Value@platform\",";
const PROGMEM char modelPart93[] = "\"name\":\"platform\",\"value\"";
const PROGMEM char modelPart94[] = ":\"arduino\"}]},{\"class\":\"or";
const PROGMEM char modelPart95[] = "g.kevoree.DeployUnit@hashcode=,";
const PROGMEM char modelPart96[] = "name=ArduinoNode,version=1.0.0";
const PROGMEM char modelPart97[] = "\",\"hashcode\":\"\",\"name\":";
const PROGMEM char modelPart98[] = "\"ArduinoNode\",\"version\":\"1";
const PROGMEM char modelPart99[] = ".0.0\",\"url\":\"\",\"requiredL";
const PROGMEM char modelPart100[] = "ibs\":[],\"filters\":[{\"class";
const PROGMEM char modelPart101[] = "\":\"org.kevoree.Value@platform";
const PROGMEM char modelPart102[] = "\",\"name\":\"platform\",\"valu";
const PROGMEM char modelPart103[] = "e\":\"arduino\"}]},{\"class\":";
const PROGMEM char modelPart104[] = "\"org.kevoree.DeployUnit@hashco";
const PROGMEM char modelPart105[] = "de=,name=ArduinoChannel,version";
const PROGMEM char modelPart106[] = "=1.0.0\",\"hashcode\":\"\",\"na";
const PROGMEM char modelPart107[] = "me\":\"ArduinoChannel\",\"versi";
const PROGMEM char modelPart108[] = "on\":\"1.0.0\",\"url\":\"\",\"r";
const PROGMEM char modelPart109[] = "equiredLibs\":[],\"filters\":[{";
const PROGMEM char modelPart110[] = "\"class\":\"org.kevoree.Value@p";
const PROGMEM char modelPart111[] = "latform\",\"name\":\"platform\"";
const PROGMEM char modelPart112[] = ",\"value\":\"arduino\"}]}]}],\"";
const PROGMEM char modelPart113[] = "typeDefinitions\":[],\"deployUn";
const PROGMEM char modelPart114[] = "}";
const char* const model[] PROGMEM = {modelPart0, modelPart1, modelPart2, modelPart3, modelPart4, modelPart5, modelPart6, modelPart7, modelPart8, modelPart9, modelPart10, modelPart11, modelPart12, modelPart13, modelPart14, modelPart15, modelPart16, modelPart17, modelPart18, modelPart19, modelPart20, modelPart21, modelPart22, modelPart23, modelPart24, modelPart25, modelPart26, modelPart27, modelPart28, modelPart29, modelPart30, modelPart31, modelPart32, modelPart33, modelPart34, modelPart35, modelPart36, modelPart37, modelPart38, modelPart39, modelPart40, modelPart41, modelPart42, modelPart43, modelPart44, modelPart45, modelPart46, modelPart47, modelPart48, modelPart49, modelPart50, modelPart51, modelPart52, modelPart53, modelPart54, modelPart55, modelPart56, modelPart57, modelPart58, modelPart59, modelPart60, modelPart61, modelPart62, modelPart63, modelPart64, modelPart65, modelPart66, modelPart67, modelPart68, modelPart69, modelPart70, modelPart71, modelPart72, modelPart73, modelPart74, modelPart75, modelPart76, modelPart77, modelPart78, modelPart79, modelPart80, modelPart81, modelPart82, modelPart83, modelPart84, modelPart85, modelPart86, modelPart87, modelPart88, modelPart89, modelPart90, modelPart91, modelPart92, modelPart93, modelPart94, modelPart95, modelPart96, modelPart97, modelPart98, modelPart99, modelPart100, modelPart101, modelPart102, modelPart103, modelPart104, modelPart105, modelPart106, modelPart107, modelPart108, modelPart109, modelPart110, modelPart111, modelPart112, modelPart113, modelPart114};

void printModel() {
for (int i = 0; i <= 114; i++) {
    strcpy_P(buf, (char*)pgm_read_word(&(model[i]))); 
    Serial.println(buf);
    //delay(500);
  }
}


// INSTANCE GRAPHE
const PROGMEM char instancePart0[] = "add node938 : eu.heads.ArduinoN";
const PROGMEM char instancePart1[] = "odeadd node938.comp772 : eu.hea";
const PROGMEM char instancePart2[] = "ds.ArduinoDigitalInputadd chan7";
const PROGMEM char instancePart3[] = "27, chan883 :eu.heads.ArduinoCh";
const PROGMEM char instancePart4[] = "annelbind node938.comp772.off c";
const PROGMEM char instancePart5[] = "han727bind node938.comp772.on c";
const PROGMEM char instancePart6[] = "han883";
const char* const instance[] PROGMEM = {instancePart0, instancePart1, instancePart2, instancePart3, instancePart4, instancePart5, instancePart6};

void printInstance() {
for (int i = 0; i <= 6; i++) {
    strcpy_P(buf, (char*)pgm_read_word(&(instance[i]))); 
    Serial.println(buf);
    //delay(500);
  }
}

void clearSerialBuffer() {
    while(Serial.read() > 0){
      Serial.read();
    }
}
boolean readStr(String str) {
  boolean res = true;
  for(int i = 0; i < str.length();i++){
    res |= (Serial.read() == str[i]);
  }
}

void setup()  
{
  Serial.begin(115200);
  Serial.println("Init");
}

void loop() // run over and over
{
  if (Serial.available() >= 8) {
    if(readStr("get")) {
      char test = Serial.read();
      if(test == 'M') {
        if(readStr("odel")) {
          printModel();
        } else {
          Serial.println("ERROR");
          clearSerialBuffer();
        }
      } else if(test == 'I') {
        if(readStr("nstance")) {
          printInstance();
          clearSerialBuffer();
        } else {
          Serial.println("ERROR");
          clearSerialBuffer();
        }
      } else {
        Serial.println("ERROR");
        clearSerialBuffer();
      }
    } else {
        Serial.println("ERROR");
        clearSerialBuffer();
      }
  }
    
}
