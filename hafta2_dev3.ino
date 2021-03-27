#include <Joystick.h>
#include <Servo.h>
Joystick_ Joystick;
Servo servo1;
Servo servo2;
#define Pot1 A0
#define Pot2 A1
int deger1;
int deger2;


void setup() {
Joystick.begin ();
servo1.attach(12);
servo2.attach(13);

}

void loop() {
 Joystick.setXAxis(analogRead(A0));
 Joystick.setYAxis(analogRead(A1));

 Joystick.sendState ();

deger1=analogRead(A0);
deger1=map(deger1,0,1023,0,90);
servo1.write(deger1);

deger2=analogRead(A1);
deger2=map(deger2,0,1023,0,180);
servo2.write(deger2);


}
