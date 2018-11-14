//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600); // Initialisation de la liaison série
  output = createWriter ("Battements.csv"); // Création du fichier csv en mode écriture
}
  void draw() {
    if (udSerial.available() > 0) { // On vérifie que l'Arduino est bien branché
      String SenVal = udSerial.readString(); // On lit ce que nous envoie l'Arduino et on donne la valeur a SenVal qui est de type String
      if (SenVal != null) { // On vérifie que la valeur envoyée existe
        output.print(SenVal); // On écrit cette valeur dans le fichier csv
      }
    }
  }
// Cette fonction nous permet d'arrêter l'écriture en appuyant sur une touche
  void keyPressed(){ 
    output.flush();
    output.close();
    exit(); 
  }
