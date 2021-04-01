int R = 3;
int G = 5;
int B = 6;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  analogWrite(R,180);
  analogWrite(G,100);
  analogWrite(B,0);
}

//analogWrite komutundaki sayıları 0 ile 255 arasında değiştirerek istediğimiz renkleri elde edebiliriz.
//0 değeri 0V ve 255 değeri 5V'a eşittir.
