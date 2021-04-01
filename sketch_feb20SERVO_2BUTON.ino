#include<Servo.h>

Servo servom;

int aci = 0; //Açıyı 0'dan başlat.

#define tus1 6 //butonların bağlı olduğu pinlerin gösterimi.
#define tus2 7


void setup() {
  servom.attach(8); //Servonun bağlı olduğu pin
  pinMode(tus1, INPUT_PULLUP); //buton bağladığımız için pinMode fonksiyonu kullanıldı.
  pinMode(tus2, INPUT_PULLUP); //Bu fonksiyondan veri çekeceğiz ama loop kısmında gösterilecek burada saddece ne işe yaracağı gösterildi.

}

void loop() {
  int tus1r = digitalRead(tus1); //tus1 butonundan gelen digital değeri oku.
  int tus2r = digitalRead(tus2); //tus1 ve tus2'den değer okunur.

  if (!tus1r) { //tus1'den 0 komutunu alırsa 0dereceye git
    servom.write(0);
  }
  if (!tus2r) { //tus2'den 0 komutu alırsa 180dereceye git.
    servom.write(180);
  }


}
