#define echoPin 13
#define trigPin 12
#define buzzerPin 11
int sure;
int mesafe; // int dediğimiz için mesafeyi kesirli olarak göremeyiz. 30.8 ise de 30 gözükür 30.2 ise de 30 gözükür.

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);
  mesafe = sure / 29.1 / 2; //Mesafeyi ölçmek için kullanılan formül
  Serial.print("Mesafe:");
  Serial.print(mesafe);
  Serial.println(" CM ");
  delay(500);

  if (mesafe < 30 && mesafe > 20) { //mesafe 30cm'den küçük ve 20cm'den büyükse
    tone(buzzerPin, HIGH); //Buzzer ötsün
    delay(1000); //1sn dursun
    noTone(buzzerPin); //buzzer sussun
    delay(1000); //1 sn sonra diğer if durumuna geçsin.
  }
  else if (mesafe <= 20 && mesafe > 10) { //mesafe 20 ile 10 arasındaysa
    tone(buzzerPin, HIGH); //Buzzer ötsün
    delay(500); //50ms yani yarım saniye duracak
    noTone(buzzerPin); //buzzer sussun
    delay(500); //yarım sn sonra diğer if durumuna geçsin.
  }
  else if (mesafe <= 10) { //mesafe 10'dan küçükse
    tone(buzzerPin, HIGH); //Buzzer ötsün
    delay(250); //0.25 sn dursun
    noTone(buzzerPin); //buzzer sussun
    delay(250); //çeyrek sn sonra diğer if durumuna geçsin.
  }
  else { //hiçbir seçenek değilse
    noTone(buzzerPin); //ses yok
  }

}

//Şuanda kullanılan mesafe ölçerler en fazla 2.5m veya 3m ölçüm yapabiliyor çünkü ses dalgası çarpıp geri gelemiyor daha fazlasında. Ama daha gelişmiş kullanılabilir.
//En az 3cm ve 4cm'e kadar yakın mesafeyi ölçebilir.

//BU PROJEDE MESAFE SENSÖRÜNE YAKLAŞTIKÇA SES SÜREKLİ HIZLANARAK ARTACAK. 
//AYNI BİR ARABA PARK SENSÖRÜ GİBİ.
