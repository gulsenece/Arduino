#include<Servo.h>

Servo servo;

void setup() {
  servo.attach(5); //ServoMotor'un 5.pine bağlandığını gösterir.
}

void loop() {

  servo.write(0); 
  delay(1000); //1sn delay komutu ve hangi derecede durduğunu görmek için delay komutunu kullandık.
  servo.write(45);
  delay(1000);
  servo.write(90);
  delay(1000);
  servo.write(135);
  delay(1000);
  servo.write(180);
  delay(1000); //döngü içinde olduğu için 180den 0 komutuna gidecek ve delay gereklidir.

}

// IEEE IZU 2.Gün'de yapılan SERVO KONTROL ÖRNEĞİ_1'dir. Videosu instada paylaşıldı.
