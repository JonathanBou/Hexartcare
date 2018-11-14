int pouls;
unsigned long temps;

void setup() 
{
  Serial.begin(9600);
  
  randomSeed(analogRead(A0)); // Initialisation du générateur de nombres aléatoire.
  
  for (int i = 0; i < 50; i++) // Boucle for qui écris toutes les valeurs.
  {
    pouls = random(50,101); // Nombre aléatoire allant de 50 à 100 pour le pouls.
    temps = millis(); // Temps écoule depuis le lancement du programme.
    
    Serial.print(pouls); // Ecriture de la valeur du pouls.
    Serial.print(";"); // Separation entre le pouls et le temps ecouler.
    Serial.println(temps); // Ecriture du temps ecouler.
    delay(1); // delais de 1 ms pour ne pas avoir plusieurs valeurs en même temps.
  }
}

void loop() 
{
 
}
