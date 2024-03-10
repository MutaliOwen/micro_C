// variables m1, m2, en matched to specified pins
int m1 = 13, m2=12, en=9;
int pot =A0, st=0;

void setup() {
  // put your setup code here, to run once:
  //declare pins m1, m2 and en as outputs
  //control of dc motor achieved through the following
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(en, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  // value from pot storted to the st var
  //st value written to en by using analogWrite()
  st=analogRead(pot)/4;
  analogWrite(en, st);//ctrl speed
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  //PWM value rises btwn 0-255 while pot from 0-1023.(pot val/4)
}
