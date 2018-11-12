//Toutes les leds s'allume et se ferment pendants 2 seconde
void touteslesleds(){
  // Les leds s'allument
    digitalWrite (2, HIGH);
    digitalWrite (3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite (6, HIGH);
    digitalWrite (7, HIGH);
    digitalWrite (8, HIGH);
    digitalWrite (9, HIGH);
    digitalWrite (10, HIGH);
    digitalWrite (11, HIGH);
//temps 2 secondes
    delay (2000);
 // Les leds se ferment
    digitalWrite (2, LOW);
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (6, LOW);
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
  //temps 2 secondes
    delay (2000);
 // Les leds s'allument
    digitalWrite (2, HIGH);
    digitalWrite (3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite (5, HIGH);
    digitalWrite (6, HIGH);
    digitalWrite (7, HIGH);
    digitalWrite (8, HIGH);
    digitalWrite (9, HIGH);
    digitalWrite (10, HIGH);
    digitalWrite (11, HIGH);
 //temps 2 secondes
    delay (2000);
 // Les leds se ferment
    digitalWrite (2, LOW);
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (6, LOW);
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
}

// Allumage des leds 1 sur 2
void uneledsurdeux (){
  //Seul la leds 1 s'allument
    digitalWrite (2, HIGH);
    delay(2000);
    digitalWrite (2, LOW);
    digitalWrite (4, HIGH);
    delay(2000);
    digitalWrite (4, LOW);
    digitalWrite (6, HIGH);
    delay(2000);
    digitalWrite (6, LOW);
    digitalWrite (8, HIGH);
    delay(2000);
    digitalWrite (8, LOW);
    digitalWrite (10, HIGH);
    delay(2000);
    digitalWrite (10, LOW);
    digitalWrite (3, HIGH);
    delay(2000);
    digitalWrite (3, LOW);
    digitalWrite (5, HIGH);
    delay(2000);
    digitalWrite (5, LOW);
    digitalWrite (7, HIGH);
    delay(2000);
    digitalWrite (7, LOW);
    digitalWrite (9, HIGH);
    delay(2000);
    digitalWrite (9, LOW);
    digitalWrite (11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
}

// Allumage des leds 1 sur 3
void uneledsurtrois()
{
    digitalWrite (2, HIGH); 
    delay (1000);
    digitalWrite (2, LOW); 
    digitalWrite (5, HIGH); 
    delay (1000);
    digitalWrite (5, LOW); 
    digitalWrite (8, HIGH);
    delay (1000); 
    digitalWrite (8, LOW); 
    digitalWrite (11, HIGH); 
    delay (1000);
    digitalWrite (11, LOW);  
    digitalWrite (4, HIGH); 
    delay (1000);
    digitalWrite (4, LOW); 
    digitalWrite (7, HIGH); 
    delay (1000);
    digitalWrite (7, LOW); 
    digitalWrite (10, HIGH); 
    delay (1000);
    digitalWrite (10, LOW); 
    digitalWrite (3, HIGH); 
    delay (1000); 
    digitalWrite (3, LOW);
    digitalWrite (6, HIGH); 
    delay (1000); 
    digitalWrite (6, LOW);
    digitalWrite (9, HIGH); 
    delay (1000);  
    digitalWrite (9, LOW);
}
//Led au choix 
void choixled(){
    long led = 8;
    digitalWrite (led, HIGH);
    delay(1000);
    digitalWrite (led, LOW);
    delay(1000);
}
// Allumage chenille
void chenillard(){
    digitalWrite (2, HIGH);
    delay (500);
    digitalWrite (3, HIGH);
    delay (500);
    digitalWrite (4, HIGH);
    delay (500);
    digitalWrite (5, HIGH);
    delay (500);
    digitalWrite (6, HIGH);
    delay (500);
    digitalWrite (7, HIGH);
    delay (500);
    digitalWrite (8, HIGH);
    delay (500);
    digitalWrite (9, HIGH);
    delay (500);
    digitalWrite (10, HIGH);
    delay (500);
    digitalWrite (11, HIGH);
    delay (500);
    digitalWrite (2, LOW);
    delay (500);
    digitalWrite (3, LOW);
    delay (500);
    digitalWrite (4, LOW);
    delay (500);
    digitalWrite (5, LOW);
    delay (500);
    digitalWrite (6, LOW);
    delay (500);
    digitalWrite (7, LOW);
    delay (500);
    digitalWrite (8, LOW);
    delay (500);
    digitalWrite (9, LOW);
    delay (500);
    digitalWrite (10, LOW);
    delay (500);
    digitalWrite (11, LOW);
    delay (500);
    }

    //Optionel 1 : led aleatoire
void optionelun()
{
    int led = random(1,11);
    int port = led + 1;
    digitalWrite (port, HIGH);
    delay(500);
    digitalWrite (port, LOW);
    delay(500);
}

//Optionel 2 : ordre croissant
void optioneldeux(){
   digitalWrite (2, HIGH);
    delay (2000);
    digitalWrite (2, LOW);
    digitalWrite (3, HIGH);
    digitalWrite (11, HIGH);
    delay (2000);
    digitalWrite (3, LOW);
    digitalWrite (11, LOW);
    digitalWrite (4, HIGH);
    digitalWrite (10, HIGH);
    delay (2000);
    digitalWrite (4, LOW);
    digitalWrite (10, LOW);
    digitalWrite (5, HIGH);
    digitalWrite (9, HIGH);
    delay (2000);
    digitalWrite (5, LOW);
    digitalWrite (9, LOW);
    digitalWrite (6, HIGH);
    digitalWrite (8, HIGH);
    delay (2000);
    digitalWrite (6, LOW);
    digitalWrite (8, LOW);
    digitalWrite (7, HIGH);
    delay (2000);
    digitalWrite (7, LOW);
}  
