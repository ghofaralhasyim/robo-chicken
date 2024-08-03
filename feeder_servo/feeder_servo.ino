#include <Servo.h>
#define but_right D6
#define but_left D7
Servo s1;

int degree = 0;

  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  s1.attach(D3);
  pinMode(but_right, INPUT_PULLUP);
  pinMode(but_left, INPUT_PULLUP);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnleft = digitalRead(but_left);
  int btnright = digitalRead(but_right);

  Serial.print("btnleft : ");
  Serial.println(btnleft);
  Serial.print("btnright : " );
  Serial.println(btnright);
  
  if (btnright == 1 && btnleft == 0){
    s1.write(30);
    delay(1000);
  }
  else if (btnright == 0 && btnleft == 1){
    s1.write(0);
    delay(1000);
  
}
  delay(1000);
}