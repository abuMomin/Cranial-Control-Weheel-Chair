#include<Wire.h>

const int MPU_addr=0x68;
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;

int minVal=265;
int maxVal=402;

double x;
double y;
double z;

void setup() {
  // put your setup code here, to run once:

Wire.begin();
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B);
Wire.write(0);
Wire.endTransmission(true);
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr,14,true);
  AcX=Wire.read()<<8|Wire.read();
  AcY=Wire.read()<<8|Wire.read();
  AcZ=Wire.read()<<8|Wire.read();
    int xAng = map(AcX,minVal,maxVal,-90,90);
    int yAng = map(AcY,minVal,maxVal,-90,90);
    int zAng = map(AcZ,minVal,maxVal,-90,90);

   x= RAD_TO_DEG * (atan2(-yAng, -zAng)+PI);
   y= RAD_TO_DEG * (atan2(-xAng, -zAng)+PI);
   z= RAD_TO_DEG * (atan2(-yAng, -xAng)+PI);



  double AngleY = y;
  double AngleX = x;
/*
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.println();
*/  
  if (AngleY < 60 && AngleY > 30)
  {
      Serial.write('1');
  }
  
  else if (AngleY < 340 && AngleY > 280) 
  {
     Serial.write('2');
  
  }

  else
  {
    //Serial.write('0');
 
 if (AngleX < 60 && AngleX > 30)
  {
      Serial.write('3');
  }
  
  else if (AngleX < 340 && AngleX > 280) 
  {
      Serial.write('4');
  
  }

  else
  {
      Serial.write('0');
  
  }
   
  }




}
