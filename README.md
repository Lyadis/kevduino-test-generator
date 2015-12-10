# kevduino-test-generator
Smal generator supposed to generate an arduino sketch returning when asked a kev model and an instance graph.

##Usage 
run GrosseString with param modelFile instanceFile [outdir]
It will write a file kevduinoTest.ino in outputDir containing a sketch supposed to behave as following:
* when receiving getModel on serial port, it will return (on serial port) the model
* when receiving getInstance on serial port, it will return (on serial port) the instance graph
* when receiving any other string, it will return "ERROR"
