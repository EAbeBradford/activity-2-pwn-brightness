#define LED_PIN 11


//change this to change the speed of dim and bright
int dimSpeed = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("brightning");
  //make the LED brighter
  for(int x= 0;x<=255; x++){
    analogWrite(LED_PIN, x);
    delay(dimSpeed);
  }

  Serial.println("Dimming");
  //make LED dimmer
  for(int x= 255;x>=0; x--){
    analogWrite(LED_PIN, x);
    delay(dimSpeed);

  }

}
