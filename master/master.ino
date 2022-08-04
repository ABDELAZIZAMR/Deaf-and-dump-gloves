#include <SoftwareSerial.h>
SoftwareSerial sigmaSS(4,5);
int mic = 13;
int vib = 12;
int red = 11;
int blue = 10;
void setup()   {
  Serial.begin(9600);
  pinMode(mic, INPUT);
  pinMode(vib, OUTPUT);
  pinMode (red , OUTPUT);
  pinMode (blue , OUTPUT);
  sigmaSS.write(9600);
  
}
void loop() {
   digitalWrite(red, HIGH);
   int  xX = digitalRead (mic);
   if ( xX == HIGH) {
    digitalWrite(vib,HIGH);
    digitalWrite (red , LOW);
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);
  }
  int flex1 = analogRead(2);
  int flex2 = analogRead(3);
  int flex3 = analogRead(4);
  int flex4 = analogRead(1);
  int flex5 = analogRead(0);
  float value_x = analogRead(5);
  float value_y = analogRead(6);
  float value_z = analogRead(7);
  int a = map(flex1, 300, 1000, 0, 100);
  int b = map(flex2, 400, 900,  0, 90 );
  int c = map(flex3, 300, 1000, 0, 100);
  int d = map(flex4, 400, 1000, 0, 90 );
  int e = map(flex5, 300, 1000, 0, 100);
  int xg = map(value_x, 267, 400, -100, 100);
  int yg = map(value_y, 272, 406, -100, 100);
  int zg = map(value_z, 277, 410, -100, 100);
  int x = (float)xg / (100.00);
  int y = (float)yg / (100.00);
  int z = (float)zg / (100.00);
  
  if ( a >= 70 && a <= 80 && c >= 90 && c <= 94 && d >= 85 && d <= 100 && e >= 70 && e <= 79 ) {
    if (x == 0 && y == 1 && z == 0 ) {
     sigmaSS.write(' voice command 1 ');
    }
  }
  /****************2***************/
  if ( a >= 70 && a < 80 && c >= 90 && c < 94  && d >= 85 && d <= 100  && e >= 70 && e < 79 ) {
    if (x == 0 && y == 0 && z == 1 ) {
     sigmaSS.write('voice command 2');
    }
  }
  /****************3***************/
  if ( a >= 81 && a <= 100 && c >= 95 && c <= 100  && e >= 70 && e <= 79 ) {
    if (x == 0 && y == 0 && z == 0 ) {
      sigmaSS.write('voice command 3');
    }
  }
  /****************4***************/
  if ( a >= 81 && a < 100 && c >= 95 && c < 100 && d >= 85 && d < 100 && e >= 70 && e < 79 ) {
    if (x == 0 && y == 0 && z == 1 ) {
      sigmaSS.write('voice command 4');
    }
  }
  /****************5***************/
  if ( a >= 81 && a < 100 && c >= 90 && c < 94 && d >= 85 && d < 100 && e >= 70 && e < 79 ) {
    if (x == 0 && y == 0 && z == 1 ) {
      sigmaSS.write('voice command 5');
    }
  }
  /****************6***************/
  if (  a >= 81 && a <= 100 && c >= 90 && c <= 94 && d >= 85 && d < 100 && e >= 70 && e <= 79  ) {
    if (x == 0 && y == 0 && z == 0 ) {
      sigmaSS.write('voice command 6');
    }
  }
  /****************7***************/
  if (  a >= 81 && a <= 100 && c >= 90 && c <= 94 && d >= 85 && d < 100  && e >= 70 && e <= 79 ) {
    if (x == 1 && y == 0 && z == 0 ) {
      sigmaSS.write('voice command 7');
    }
  }
  /****************8***************/
  if (  a >= 70 && a <= 80 && c >= 95 && c <= 100  && e >= 80 && e <= 100   ) {
    if (x == 0 && y == 0 && z == 1 ) {
     sigmaSS.write('voice command 8');
    }
  }
  /****************9***************/
  if (  a >= 70 && a <= 80 && c >= 90 && c <= 94  && e >= 80 && e <= 100   ) {
    if (x == 0 && y == 0 && z == 1 ) {
      sigmaSS.write('voice command 9');
    }
  }
  /****************10***************/
  if ( a >= 81 && a <= 100 && c >= 95 && c <= 100  && e >= 80 && e <= 100   ) {
    if (x == 0 && y == 1 && z == 0 ) {
      sigmaSS.write('voice command 10');
    }
  }
  /****************11***************/
  if ( a >= 70 && a <= 80 && c >= 95 && c <= 100 && e >= 80 && e <= 100 ) {
    if (x == 0 && y == 1 && z == 0 ) {
     sigmaSS.write('lamp 1 open');
    }
  }
  /****************12***************/
  if ( a >= 70 && a < 80 && c >= 95 && c < 100  && e >= 80 && e < 100 ) {
    if (x == 0 && y == 0 && z == 0 ) {
     sigmaSS.write('lamp 1 off');
    }
  }
  /****************13***************/
  if ( a >= 70 && a <= 80 && c >= 90 && c <= 94  && e >= 80 && e <= 100 ) {
    if (x == 0 && y == 1 && z == 0 ) {
      sigmaSS.write('lamp 2 open');
    }
  }
  /****************14***************/
  if ( a >= 70 && a <= 80 && c >= 90 && c <= 94  && e >= 80 && e <= 100 ) {
    if (x == 0 && y == 0 && z == 0 ) {
      sigmaSS.write('lamp 2 off');
    }
  }
  /****************15***************/
  if ( a >= 70 && a < 80 && c >= 90 && c < 94 && d >= 85 && d < 100 && e >= 70 && e < 79 ) {
    if (x == 0 && y == 0 && z == 0 ) {
      sigmaSS.write('lamp 3 open');
    }
  }
  /****************16***************/
  if ( a >= 70 && a < 80 && c >= 90 && c < 94 && d >= 85 && d < 100 && e >= 70 && e < 79 ) {
    if (x == 0 && y == 0 && z == 0 ) {
     sigmaSS.write('lamp 3 off');
    }
  }
  /****************17***************/
  if (  a >= 81 && a <= 100 && c >= 95 && c <= 100 && e >= 80 && e <= 100  ) {
    if (x == 0 && y == 0 && z == 1 ) {
      sigmaSS.write('fan on');
    }
  }
  /****************18***************/
  if (  a >= 81 && a <= 100 && c >= 95 && c <= 100 && e >= 80 && e <= 100   ) {
    if (x == 1 && y == 0 && z == 0 ) {
      sigmaSS.write('fan off');
    }
  }
  delay(1000);
}
