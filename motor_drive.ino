int motor1pin1 = 1;
int motor1pin2 = 2;
int motor1EnP = 3;
int m1speed=200;

int motor2pin1 = 7;
int motor2pin2 = 8;
int motor2EnP = 6;
int m2speed=200;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor1EnP , OUTPUT);
  
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(motor2EnP , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  

   analogWrite(motor1EnP, m1speed);
   analogWrite(motor2EnP, m2speed);
   
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  
}
