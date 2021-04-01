int ledler[] = {2,3,4,5,6,7,8,9,10,11};

void setup() {
for(int i=0; i<10; i++){
  pinMode(ledler[i], OUTPUT);
}

}

void loop() {
  for(int i=0; i<10; i++){
    digitalWrite(ledler[i], HIGH);
    delay(150);
    digitalWrite(ledler[i], LOW);
  }

for (int j=9; j>-1; j--){
   digitalWrite(ledler[j], HIGH);
   delay(150);
   digitalWrite(ledler[j], LOW);
  
}

}

// Breadboar'ın ortasını geçtiği için breadboardtaki - kısmı 1 adet erkek erkek jumper ile bağladım.
