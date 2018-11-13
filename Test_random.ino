int pouls;
int millisec;

void setup() {
  Serial.begin(9600);
  for(int i=0; i<10; i++) {
  millisec = i;
  Serial.print(millisec);
  Serial.print(";");
  pouls = random(60, 120);
  Serial.println(pouls);
  }
}

void loop() {

}
