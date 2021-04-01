long sure;
long uzaklik;
int trigPin = 4;
int echoPin = 3;

void setup() {
  pinMode(trigPin, OUTPUT); //Ses dalgası gönderileceği için yani verileceği için ÇIKIŞ
  pinMode(echoPin, INPUT); //Ses dalgası alınacağı için yani gireceği için GİRİŞ
  Serial.begin(9600); //Haberleşme başlatıldı.
}

void loop() {
  digitalWrite(trigPin, LOW); //İlk konumda 0
  delayMicroseconds(5); //5mikrosaniyede bir tetik ver
  digitalWrite(trigPin, HIGH); //trig pin 1 oldu
  delayMicroseconds(10); //10 mikrosaniye geçti. 
  digitalWrite(trigPin, LOW); //Tekrar LOW yani 0 konumuna geldi. 15 mikrosaniye aralıklarla LOW, HIGH, LOW oldu.
  sure = pulseIn(echoPin, HIGH); //pulseIn fonksiyonu echoPin'e özel. Çünkü sureyi ölçecek ve girdi olduğu için IN ve ses dalgasını pulse olarak düşünebilirsiniz. 1 olarak girdi.
  uzaklik = sure / 29.1 / 2; //Uzaklık gonksiyonu ve cm cinsindendir.
  Serial.print("Uzaklik:"); //serial.print içine tırnak koyup istediğimiz herhangi bir şeyi yazabiliriz.
  Serial.print(uzaklik); //serial.print içine uzaklik yazıp tırnak koymazsak yukarıdaki yazdığımız bir şeyi belirtiriz.
  Serial.println(" CM ");
  delay(500); // Tetikleyip hesaplamalayıp yazma işlemini 500milisaniyede bir ekrana yazdıracak.

} 
