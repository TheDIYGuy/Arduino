#include "U8glib.h"  // u8

U8GLIB_ST7920_128X64_1X u8g(6, 5, 9); // u8

#include <SPI.h>   //sd
#include <SD.h>    //sd

const int chipSelect = 4;  //sd 
int i = 0; //for making text array
File dataFile;
char text[10];
void setup() {// setup is all sd
   // Open serial communications and wait for port to open:
   
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.print("Initializing SD card...");

  // see if the card is present and can be initialized:
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    while (1);
  }
  Serial.println("card initialized.");

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  File dataFile = SD.open("test.txt");

  // if the file is available, write to it:
  if (dataFile) {
    
    while (dataFile.available()) {
      
      
      
     text[i] = dataFile.read();
     Serial.print(text[i]); 
    
     i++; 
    // Serial.print(i);
       
    }
    dataFile.close();
  }
  // if the file isn't open, pop up an error:
  else {
    Serial.println("error opening datalog.txt");
  }
  
 
     
}

void loop() {// loop is all u8
 



u8g.firstPage(); 
 do {
  Draw();
  } while( u8g.nextPage() );
  delay(200); 
 
  }


  void Draw(){
u8g.setFont(u8g_font_ncenR08);
//u8g.setPrintPos(40,60);
u8g.drawStr(0, 20, text);
u8g.drawStr(0, 60, "JP");

    }
