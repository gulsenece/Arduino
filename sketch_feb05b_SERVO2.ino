#include<Servo.h>

Servo servo;

int aci = 0; //Başlangıç olarak açı değeri ve istediğin herhangi bir değer ile başlatabilirsin.

void setup() {
  servo.attach(5); //ServoMotor'un 5.pine bağlandığını gösterir.
}

void loop() {
  for (aci = 0; aci <= 180; aci++) { //180 derece olana kadar açıyı bir bir arttıracak.
    servo.write(aci); //Yukarıda oluşturulan servoyu açıyı sürekli buraya yaz
    delay(100); //100 ms aralıklarla buraya yaz.
  }

}
