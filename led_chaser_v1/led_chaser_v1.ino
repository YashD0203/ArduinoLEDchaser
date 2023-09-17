// define the digital pins on which LED's are connected 
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int t = 100;


void setup() {
// set the pins to OUTPUT mode 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  
}


void loop(){
// turn on the LED's in a sequence one after another
  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led8, HIGH);

  delay(1000);
// turn the LED's off one after another in opposite fashion 
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led1, LOW);

  delay(500);
// turn on all LED's at the same time
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(500);

// turn off all LED's at the same time
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(250);

// turn on all LED's at the same time
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(500);

// turn off all LED's at the same time
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(500);

}

