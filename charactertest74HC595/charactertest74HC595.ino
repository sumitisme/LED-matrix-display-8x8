
int clockpinRC = 11;

int latchpinR = 3;
int datainR = 7;

int latchpinC = 9;
int datainC = 12;

int source = 5;

int wait = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(clockpinRC, OUTPUT); 
  pinMode(latchpinR, OUTPUT);
  pinMode(datainR, OUTPUT);
  pinMode(latchpinC, OUTPUT);
  pinMode(datainC, OUTPUT);
  pinMode(source, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //This will be a program to print each letter of the alphabet hopefully
//  S();
//  U();
//  M();
//  I();
//  T();

  love();
  love2();
  
//  delay(20);

  analogWrite(source, 255);
//  line();
//  clearscr();
  delay(wait);

}

void clearscr() {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinR, LOW);
    shiftOut(datainR, clockpinRC, LSBFIRST, 0x00);
    digitalWrite(latchpinR, HIGH);

    digitalWrite(latchpinC, LOW);
    shiftOut(datainC, clockpinRC, LSBFIRST, 0x00);
    digitalWrite(latchpinC, HIGH);
  }

  return;
}

void love() {

   byte col[] = {0b00000000, 0b01100110, 0b10011001, 0b10000001, 0b10000001, 0b01000010, 0b00100100, 0b00011000};
   byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
   int i = 0;

   while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);
    
    digitalWrite(latchpinR, LOW);
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
    }  
   i++;
   }

    
  return;
}

void love2() {
  byte col[] = {0b00000000, 0b00000000, 0b00100100, 0b01011010, 0b01000010, 0b00100100, 0b00011000, 0b00000000};
   byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
   int i = 0;

   while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);
    
    digitalWrite(latchpinR, LOW);
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
    }  
   i++;
   }

    
  return;
}

void line() {
  byte col[] = {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01};
  byte row[] = {0b10000000, 0b01000000, 0b00100000, 0b00010000, 0b00001000, 0b00000100, 0b000000010, 0b00000001};

  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);
    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
    digitalWrite(latchpinC, HIGH);

    digitalWrite(latchpinR, LOW);
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
    digitalWrite(latchpinR, HIGH);

    delay(wait);
  }

  return;
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
void I() {
  byte col[] = {0b01111110, 0b01111110, 0b00011000, 0b00011000, 0b00011000, 0b00011000, 0b01111110, 0b01111110}; 
  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
  int i = 0;

  while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);
    
    digitalWrite(latchpinR, LOW);
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
  }  
    i++;
    }
  return;
}
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
void M() {
  byte col[] = {0b11000011, 0b11100111, 0b11111111, 0b11111111, 0b11011011, 0b11000011, 0b11000011, 0b11000011}; 
  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
  int i =0;

  while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);
    
    digitalWrite(latchpinR, LOW);
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
  }
  i++;
  }
  
  return;
}
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
  int i = 0;
  
  while(i < 80) {
    for(int i = 0; i < 8; i++) {
      digitalWrite(latchpinC, LOW);

      digitalWrite(latchpinR, LOW);

      shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

      digitalWrite(latchpinC, HIGH);  
  
      shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

      digitalWrite(latchpinR, HIGH);
    
      delay(wait);
      
      clearscr();
    }
  i++;
  }
  return;
}

void T() {
  byte col[] = {0B01111110, 0B01111110, 0B00011000, 0B00011000, 0B00011000, 0B00011000, 0B00011000, 0B00011000}; 
  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // This is kind of supposed to be for multiplexing
  int i = 0;

  while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);

    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);

    digitalWrite(latchpinC, HIGH);
    
    digitalWrite(latchpinR, LOW);
  
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);

    digitalWrite(latchpinR, HIGH);
    
    delay(wait);
  }
  i++;
  }
  return;
}


void U() {
  byte col[] = {0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7E, 0x7E};
  byte row[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
  int i = 0;

  while(i < 100) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(latchpinC, LOW);
    shiftOut(datainC, clockpinRC, LSBFIRST, col[i]);
    digitalWrite(latchpinC, HIGH);

    digitalWrite(latchpinR, LOW);
    shiftOut(datainR, clockpinRC, LSBFIRST, row[i]);
    digitalWrite(latchpinR, HIGH);

    delay(wait);
  }
  i++;
  }

  return;
}
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
