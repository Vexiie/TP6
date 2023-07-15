void setup() {
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  
  for (int r = 0; r <= 255; r += 16) {
    for (int g = 0; g <= 255; g += 16) {
      for (int b = 0; b <= 255; b += 16) {
        analogWrite(9, r);   
        analogWrite(6, g);  
        analogWrite(5, b);  
        delay(10);
      }
    }
  }
}