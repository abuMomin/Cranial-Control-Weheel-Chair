//motorPins
const int motorPin1 = 10,motorPin2 = 9;        //right motor
const int motorPin3 = 5,motorPin4 = 6;       //left motor
int trigPin=7,echoPin=8;
long duration, cm, inches,distance ;

int maxSpeed=180, min=10;
int rotateSpeed = 120;

int ledpin=12;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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
  
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  distance = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  //inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  
//  Serial.print(inches);
  //Serial.print("in, ");
  Serial.print(distance);
  Serial.print("CM");
  Serial.println();
  
  delay(500);

  if(distance<18)
  {
  
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0);
  }

}

