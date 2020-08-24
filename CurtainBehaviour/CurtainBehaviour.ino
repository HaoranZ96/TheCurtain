int directionPin=4;
int stepPin=5;

void setup()
{
  Serial.begin(115200);

  pinMode(directionPin,OUTPUT);
  pinMode(stepPin,OUTPUT);
  digitalWrite(directionPin,HIGH);
  digitalWrite(stepPin,LOW);
}

void loop()
{
  int v = random(0,50);
  if ((v>=0)&&(v<10)) {
    behaviourA();
  } else if ((v>=10)&&(v<25)) {
    behaviourB();  
  } else if ((v>=25)&&(v<45)) {
    behaviourC();  
  } else if (v>=45) {
    behaviourD();  
  } else { 
    Serial.print("Data out of Boundary"); 
  }
  Serial.println();
}

void behaviourA () {
  Serial.print("A");
  int r = random(0,300);
  int ra = random(100,400);
  for (int i=0; i<25000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(100);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(100);
  }
  digitalWrite(directionPin,LOW);
  delay(r);
  for (int i=0; i<25000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(100);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(100);
  }
  digitalWrite(directionPin,HIGH);
  delay(ra);
}

void behaviourB () {
  Serial.print("B");
  int r = random(0,300);
  int ra = random(100,400);
  for (int i=0; i<10000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(50);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(50);
  }
  digitalWrite(directionPin,LOW);
  delay(r);
  for (int i=0; i<10000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(50);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(50);
  }
  digitalWrite(directionPin,HIGH);
  delay(ra);
}

void behaviourC () {
  Serial.print("C");
  int r = random(0,100);
  int ra = random(100,400);
  for (int i=0; i<5000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(25);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(25);
  }
  digitalWrite(directionPin,LOW);
  delay(r);
  for (int i=0; i<5000; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(25);
    digitalWrite(stepPin,LOW);  
    delayMicroseconds(25);
  }
  digitalWrite(directionPin,HIGH);
  delay(ra);
}

void behaviourD () {
  Serial.print("D");
  int d = random(200,800);
  delay(d);
}
