//motorPins
const int motorPin1 = 5,motorPin2 = 6;        //right motor
const int motorPin3 = 9,motorPin4 = 10;       //left motor

int maxSpeed=180, min=10;
int rotateSpeed = 120;

int ledpin=12;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state;
  if(Serial.available() > 0)
  {
    state = Serial.read();
    Serial.println(state);
  }
  
  if(state == '0')
  {
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0);  
  }
  else if(state == '1')
  {
    analogWrite(motorPin1, maxSpeed);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, maxSpeed);
    analogWrite(motorPin4, 0);  
  
  }
  else if(state == '2')
  {
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, maxSpeed);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, maxSpeed);  
  
  }

    else if(state == '4')
  {
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, rotateSpeed);
    analogWrite(motorPin3, rotateSpeed);
    analogWrite(motorPin4, 0);  
  
  }

    else if(state == '3')
  {
    analogWrite(motorPin1, rotateSpeed);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, rotateSpeed);  
  
  }
}

