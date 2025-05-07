// https://www.sparkfun.com/tutorials/289
// adapted by Nicu FLORICA (niq_ro) from http://nicuflorica.blogspot.com/
// https://www.farnell.com/datasheets/65445.pdf
// https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985

#include <SoftwareSerial.h>

SoftwareSerial lcd(255, 2);  // This is required, to start an instance of an LCD (RX at pin D2)

void setup()
{
  lcd.begin(19200);  // Start the LCD at 9600 baud
//  Serial.begin(9600);

  lcd.write(0x1b); // reset + clear 
  delay(1);
  //lcd.write(0x00); // all setting at default
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
}

void loop()
{
  lcd.write(0x10); // display mode
  delay(1);
  //lcd.write(0x00); // 5x7 font, normal write
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  
  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x16); // x = 22
  delay(1);
  lcd.write(0x01); // y = 1
  delay(1);
  lcd.println("Norikate Itron"); // text
  delay(1);

  delay (3000);

  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x20); // x = 32
  delay(1);
  lcd.write(0x09); // y = 9
  delay(1);
  lcd.println("VFD Module"); // text
  delay(1);

  delay(3000);

  lcd.write(0x1b); // reset + clear 
  delay(1);
  //lcd.write(0x00); // all setting at default
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
 
  delay(1000);

  lcd.write(0x10); // display mode
  delay(1);
  lcd.write(0x02); // 10x14 font, normal write
  delay(1);

  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x30); // x = 48
  delay(1);
  lcd.write(0x02); // y = 2
  delay(1);
  lcd.println("VFD"); // text
  delay(1);
   
  delay(3000);

  lcd.write(0x1b); // reset + clear 
  delay(1);
  //lcd.write(0x00); // all setting at default
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
 
  delay(1000);

  lcd.write(0x14); // active area
  delay(1);
  lcd.write(0x2c); // left = 44
  delay(1);
  //lcd.write(0x00); // top = 0
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  lcd.write(0x52); // right = 82
  delay(1);
  lcd.write(0x11); // bottom = 17
  delay(1);
   
  lcd.write(0x18); // fill active area
  delay(1);

  lcd.write(0x10); // display mode
  delay(1);
  lcd.write(0x06); // 10x14 font, inverse
  delay(1);

  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x04); // x = 4
  delay(1);
  lcd.write(0x02); // y = 2
  delay(1);
  lcd.println("VFD"); // text
  delay(1);
   
  delay(3000);

  lcd.write(0x1b); // reset + clear 
  delay(1);
  //lcd.write(0x00); // all setting at default
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
 
  delay(1000);

// graphics
  lcd.write(0x10); // display mode
  delay(1);
  lcd.write(0x20); // 10x14 font, inverse
  delay(1);

  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x34); // x = 52
  delay(1);
  lcd.write(0x01); // y = 1
  delay(1);

  lcd.write(0x1a); // graphic write
  delay(1);
  lcd.write(0x14); // data length = 20
  delay(1);

  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  lcd.write(0x07); // 
  delay(1);
  lcd.write(0x04); // 
  delay(1);
  lcd.write(0xc7); // 
  delay(1);
  lcd.write(0xfe); // 
  delay(1);
  lcd.write(0x72); // 
  delay(1);
  lcd.write(0x73); // 
  delay(1);
  lcd.write(0x32); // 
  delay(1);
  lcd.write(0x3e); // 
  delay(1);
  lcd.write(0x3f); // 
  delay(1);
  lcd.write(0x1d); // 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);

  lcd.write(0x15); // set cursor at
  delay(1);
  lcd.write(0x34); // x = 52
  delay(1);
  lcd.write(0x09); // y = 9
  delay(1);

  lcd.write(0x1a); // graphic write
  delay(1);
  lcd.write(0x14); // data length = 20
  delay(1);
  
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1);
  lcd.write(0x3c); // 
  delay(1);
  lcd.write(0x42); // 
  delay(1);
  lcd.write(0x81); // 
  delay(1);
  lcd.write(0xb9); // 
  delay(1);
  lcd.write(0xc1); // 
  delay(1);
  lcd.write(0x42); // 
  delay(1);
  lcd.write(0x7c); // 
  delay(1);
  lcd.write(0x20); // 
  delay(1);
  lcd.write(0xd8); // 
  delay(1);
  lcd.write(0xfc); // 
  delay(1);
  lcd.write(0x3c); // 
  delay(1);
  lcd.write(0xfc); // 
  delay(1);
  lcd.write(0xca); // 
  delay(1);
  lcd.write(0x49); // 
  delay(1);
  lcd.write(0xb1); // 
  delay(1);
  lcd.write(0x89); // 
  delay(1);
  lcd.write(0x42); // 
  delay(1);
  lcd.write(0x3c); // 
  delay(1);
  //lcd.write(0x00); // 
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985 
  delay(1);


  delay(3000);

  lcd.write(0x1b); // reset + clear 
  delay(1);
  //lcd.write(0x00); // all setting at default
  lcd.write((byte)0x00); // https://forum.arduino.cc/t/serial-write-0x00-issue-solved-doc-change-suggestion/93985
  delay(1); 
  
   } // ens main loop
