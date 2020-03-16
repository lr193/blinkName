int led = D7;
int longBlink = 1000;
int shortBlink = 200;

void setup() {

pinMode(led , OUTPUT);

}

void loop() {
    
    // Letter L
    
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Line
    delay(longBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    
    //Letter A
    
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Line
    delay(longBlink);
    digitalWrite(led, LOW);
    delay(100);
    
    //Letter H
    
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    
    //Letter I
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    
    //Letter R
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Line
    delay(longBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    
    
    //Letter U
    
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Dot
    delay(shortBlink);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);//Line
    delay(longBlink);
    digitalWrite(led, LOW);
    delay(5000);
    
}