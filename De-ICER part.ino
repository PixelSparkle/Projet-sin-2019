#include <SPI.h> 
#include <Andee.h>

#include <DmxSimple.h>

// Bouton de controle De-ICER
AndeeHelper controlStateButton

// 5 couleur donc 5 boutons
AndeeHelper buttonGreen;
AndeeHelper buttonRed;
AndeeHelper buttonWhite;
AndeeHelper buttonBlue;
AndeeHelper button;

// variables pour la lyre
#define LYRE_VERT 85
#define LYRE_ROUGE 21
#define LYRE_BLANC 0
#define LYRE_BLEU 106
#define LYRE_

void setup()
{
  // initialisation interface bluetooth
  Andee.begin();  // Début connexion entre l'arduino et l'annikken andee
  Andee.clear();  // Nettoyage de l'écran au cas ou si il y a une ancienne session qui s'est mal étteinte 
  setInitialData(); // Definition des type et des apparence des objets 
  DmxSimple.usePin(4); // Définition du pin d'utilisation pour le DMX Shield
  DmxSimple.maxChannel(6); // Définition des channels maximum supportés par la lyre
}

void setInitialData() 
{ 
 /* 
  * ID BOUTONS LYRE (0-50) =
  *       0-10: Boutons de tests
  *       10-20: Couleurs
  *       20-30: Gobos
  *       30-40: Positions
  *       40-50: Specials
  *       
  * ID BOUTONS DE-ICER (50-100) =
  *       50: Control numérique ou physique 
  *       55: Control mode manuel ou automatique 
  *       60-90: Switchs
  */
  
  //INITALLISATION BOUTON DE STATUS DE CONTROL DE-ICER
  controlStateButton.setId(50)
  
  //INITIALISATION BOUTONS COULEURS
  buttonGreen.setId(0); // ID de bouton UNIQUE a chacun 
  buttonGreen.setType(BUTTON_IN); // Définition du type du bouton comme objet
  buttonGreen.setLocation(2,0,HALF);  // Definition de la position du bouton sur l'application [void setLocation(int row, int order, int span)]
  buttonGreen.setTitle("Green Color"); // Titre du bouton
  buttonGreen.setColor(GREEN); 

  buttonRed.setId(1); 
  buttonRed.setType(BUTTON_IN); 
  buttonRed.setLocation(2,0,HALF); 
  buttonRed.setTitle("Red Color");
  buttonRed.setColor(RED); 

  buttonRed.setId(2); 
  buttonRed.setType(BUTTON_IN);
  buttonRed.setLocation(2,0,HALF); 
  buttonRed.setTitle("");
  buttonRed.setColor();

  buttonRed.setId(3);
  buttonRed.setType(BUTTON_IN);
  buttonRed.setLocation(2,0,HALF); 
  buttonRed.setTitle("");
  buttonRed.setColor();
  
  buttonRed.setId(4);
  buttonRed.setType(BUTTON_IN); 
  buttonRed.setLocation(2,0,HALF); 
  buttonRed.setTitle("");
  buttonRed.setColor();
} 


void Lyregobo(int value) 
{
  DmxSimple.write(5, value); // Channel pour les gobos : 5
}

void loop() {
    DmxSimple.write(4, 190);

  buttonGreen.update(); // Affiche ou actualise le bouton vert sur l'application
  buttonRed.update(); // Affiche ou actualise le bouton rouge sur l'application
  buttonBlue.update(); // Affiche ou actualise le bouton bleu sur l'application
  buttonWhite.update(); // Affiche ou actualise le bouton blanc sur l'application
  
  //BOUTON VERT 
  if ( buttonGreen.isPressed())
  {
    buttonGreen.ack();
    DmxSimple.write(4, 85); // channel 4 valeur couleur a trouver
    Lyregobo();
  }

//BOUTON ROUGE
  if ( buttonRed.isPressed())
  {
    buttonRed.ack();
    DmxSimple.write(4, 21); // channel 4 valeur couleur a trouver
    Lyregobo();
  }

//BOUTON BLANC
 if ( buttonWhite.isPressed())
  {
    buttonWhite.ack();
    DmxSimple.write(4, 0); // channel 4 valeur couleur a trouver
   Lyregobo();
  }

// BOUTON BLEU
if ( buttonBlue.isPressed())
  {
    buttonBlue.ack();
    DmxSimple.write(4, 106); // channel 4 valeur couleur a trouver
    Lyregobo();
  }

//BOUTON CUSTOM 
if ( button.isPressed())
  {
    button.ack();
    DmxSimple.write(4, ); // channel 4 valeur couleur a trouver
    Lyregobo();
  }
}