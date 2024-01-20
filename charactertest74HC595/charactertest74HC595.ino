
int clockpinRC = 11;

int latchpinR = 3;
int datainR = 7;

int latchpinC = 9;
int datainC = 12;

int wait = 1;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(clockpinRC, OUTPUT); 
  pinMode(latchpinR, OUTPUT);
  pinMode(datainR, OUTPUT);
  pinMode(latchpinC, OUTPUT);
  pinMode(datainC, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //This will be a program to print each letter of the alphabet hopefully
  S();
//  U();
//  M();
//  I();
//  delay(20);
//  T();

}

//The following functions are for each character

//void A() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void B() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
//
//void C() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
//
//void D() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void E() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
////void F() { //There are some unknown issues with F. This isn't supported from what I can see.
////  return;
////}
//
//void G() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void H() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
//
//void I() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
//
//void J() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void K() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void L() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void M() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void N() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void O() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void P() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void Q() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void R() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}

void S() {
  byte col[] = {0x7E, 0x7E, 0x60, 0x7E, 0x7e, 0x06, 0x7E, 0x7E }; // 0111 1110, 0111 1110, 0110 0000, 0111 1110, 0111 1110, 0000 0110, 0111 1110, 0111 1110
  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is supposed to be for multiplexing

  
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    digitalWrite(latchpinR, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);  
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
  }
  
  return;
}

//void T() {
//  byte col[] = {0B01111110, 0B01111110, 0B00011000, 0B00011000, 0B00011000, 0B00011000, 0B00011000, 0B00011000}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void U() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
//
//void V() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void W() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void X() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void Y() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }
//  return;
//}
//
//void Z() {
//  byte col[] = {}; 
//  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
//
//  
//  for(int i = 0; i < 8; i++) {
//    digitalWrite(latchpinC, LOW);
//
//    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
//
//    digitalWrite(latchpinC, HIGH);
//    
//    digitalWrite(latchpinR, LOW);
//  
//    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
//
//    digitalWrite(latchpinR, HIGH);
//    
//    delay(wait);
//  }  
//  return;
//}
