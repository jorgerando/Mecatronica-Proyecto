int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;
int ENA = 6;
int ENB = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:   
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW); //sentido contrario
  
  //for (int i = 0; i < 255; i++) {
  analogWrite(ENA, i);
  analogWrite(ENB, i);
  delay(5);
  //}
  
  //for (int i = 255; i > 0; i--) {
  analogWrite(ENA, i);
  analogWrite(ENB, i);
  delay(5);
  //}
  delay(1000);
}
