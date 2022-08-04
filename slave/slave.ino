#include <SoftwareSerial.h>
#include <SPI.h>
#include <TMRpcm.h>
#include <SD.h>
#define SD_ChipSelectPin 10
TMRpcm tmrpcm;
SoftwareSerial sigmaSS(4,5);
int lamp1 = 7 ; 
int lamp2 = 3 ;
int lamp3 = 6 ;
int fan1 = 2 ;
void setup()
{ 
  pinMode( lamp1 ,OUTPUT);
  pinMode( lamp2 ,OUTPUT);
  pinMode( lamp3 ,OUTPUT);
  pinMode( fan1  ,OUTPUT);
  sigmaSS.write(9600);
  Serial.begin(9600);
  SD.begin();
  tmrpcm.speakerPin = 9;
  tmrpcm.setVolume(5);
}

void loop()
{ 
 digitalWrite(lamp1,HIGH);
 digitalWrite(lamp2,HIGH);
 digitalWrite(lamp3,HIGH);
  if (sigmaSS.available())
  {
   char val = sigmaSS.read();
    if (val == 'voice command 1')
    
    { 
      tmrpcm.play("1.wav");

    }

    if (val == 'voice command 2')
    { tmrpcm.play("2.wav");

    }
  

  if (val == 'voice command 3')
  { tmrpcm.play("2.wav");

  }


if (val == 'voice command 4')
{ tmrpcm.play("2.wav");

}


if (val == 'voice command 5')
{ tmrpcm.play("2.wav");

}


if (val == 'voice command 6')
{ tmrpcm.play("2.wav");

}


if (val == 'voice command 7')
{ tmrpcm.play("2.wav");


}

if (val == 'voice command 8')
{ tmrpcm.play("2.wav");

}


if (val == 'voice command 9')
{ tmrpcm.play("2.wav");

}


if (val == 'voice command 10')
{ tmrpcm.play("2.wav");

}


if (val == 'lamp 1 open')
{
  digitalWrite(lamp1,LOW);


}

if (val == 'lamp 1 off')
{ 
  digitalWrite(lamp1,HIGH);

}

if (val == 'lamp 2 open')
{ digitalWrite(lamp2,LOW);


}

if (val == 'lamp 2 off')
{ 
  digitalWrite(lamp2,HIGH);


}

if (val == 'lamp 3 open')
{  
  digitalWrite(lamp3,LOW);

}

if (val == 'lamp 3 off')
{  digitalWrite(lamp3,HIGH);

}


if (val == 'fan on')
{  digitalWrite(fan1,LOW);


}

if (val == 'fan off')
{
digitalWrite(fan1,HIGH);

}
}
}
