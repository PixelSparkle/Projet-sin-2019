
// On dit sur quels pin sont les entrées et sorties :
const int buttonPin1 = A4; //Bouton "A"
const int buttonPin2 = A3; //Bouton "B"
const int buttonPin3 = A2; //Bouton "C"
const int buttonPin4 = A1; //Bouton "D"
const int buttonPin5 = A0; //Bouton "E"
const int buttonSw1 = 3; //Mode Light Icing
const int buttonSw2 = 2; //Mode Heavy Icing
const int buttonSw3 = 10; //Mode Dégradé 1
const int buttonSw4 = 11; //Mode Dégradé 2
const int buttonSw5 = 12; //Mode Dégradé 3
const int ledPin0 =  4; //Relais "Lampe de fonctionnement"
const int ledPin1 =  5; //Relais "A"
const int ledPin2 =  6; //Relais "B"
const int ledPin3 =  7; //Relais "C"
const int ledPin4 =  8; //Relais "D"
const int ledPin5 =  9; //Relais "E"

// Déclaration des variables utilisées par le programme :
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int switchState1 = 0;
int switchState2 = 0;
int switchState3 = 0; 
int switchState4 = 0; 
int switchState5 = 0;
int AswitchState1 = 0;
int AswitchState2 = 0;
int AswitchState3 = 0; 
int AswitchState4 = 0; 
int AswitchState5 = 0;
int led1 = 0;
int led2 = 0;
int led3 = 0;
int led4 = 0;
int led5 = 0;
int timer = 0;
// Début du programme :
void setup() {
  pinMode(ledPin0, OUTPUT);      
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonSw1, INPUT_PULLUP);
  pinMode(buttonSw2, INPUT_PULLUP);
  pinMode(buttonSw3, INPUT_PULLUP);
  pinMode(buttonSw4, INPUT_PULLUP);
  pinMode(buttonSw5, INPUT_PULLUP);
}

void loop(){
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  switchState1 = digitalRead(buttonSw1);
  switchState2 = digitalRead(buttonSw2);
  switchState3 = digitalRead(buttonSw3);
  switchState4 = digitalRead(buttonSw4);
  switchState5 = digitalRead(buttonSw5);
  if(switchState1 == LOW);{ // Démarre le programme "Light Icing"
    if (switchState5 == LOW){ // Condition pour lancer le programme "Light Icing" avec le mode Dégradé 3
  while(led1 < 500 && switchState1 == LOW){
   digitalWrite(ledPin0, LOW);          
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState1 = digitalRead(buttonSw1);
}
   digitalWrite(ledPin1, HIGH);
  while(led2 < 100 && switchState1 == LOW){ 
   digitalWrite(ledPin2, LOW);
   delay(10);
   led2++;
   switchState1 = digitalRead(buttonSw1); 
}
   digitalWrite(ledPin2, HIGH);
  while(led3 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin3, LOW);
   delay(10);
   led3++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin3, HIGH);
  while(led4 < 30 && switchState1 == LOW){ 
   digitalWrite(ledPin4, LOW);
   delay(10);
   led4++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin4, HIGH);
  while(led5 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin5, LOW);
   delay(10);
   led5++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin5, HIGH);
  while(timer < 13000 && switchState1 == LOW){
   delay(10);
   timer++;
   switchState1 = digitalRead(buttonSw1);
}}
    else // Suite de la condition "if (switchState5 == LOW)" pour lancer le programme "Light Icing" sans le mode Dégradé 3
    if (switchState4 == HIGH) // Condition pour lancer le programme "Light Icing" sans le mode Dégradé 2
  while(led1 < 600 && switchState1 == LOW){
   digitalWrite(ledPin0, LOW);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState1 = digitalRead(buttonSw1);
}
    else // Suite de la condition "if (switchState4 == HIGH)" pour lancer le programme "Light Icing" avec le mode Dégradé 2
  while(led1 < 600 && switchState1 == LOW){
   digitalWrite(ledPin0, HIGH);          
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState1 = digitalRead(buttonSw1);
}
   digitalWrite(ledPin1, HIGH);
  while(led2 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin2, LOW);
   delay(10);
   led2++;
   switchState1 = digitalRead(buttonSw1);
}
   digitalWrite(ledPin2, HIGH);
   if (switchState3 == HIGH) // Condition pour continuer l'éxécution du programme sous le mode Dégradé 1 ( dans ce cas mode Dégradé 1 désactivé )
  while(led3 < 600 && switchState1 == LOW){                   
   digitalWrite(ledPin3, LOW);
   delay(10);
   led3++;
   switchState1 = digitalRead(buttonSw1);
}
   else // Suite de la condition "if (switchState3 == HIGH)" pour continuer l'éxécution du programme sous le mode Dégradé 1 ( dans ce cas mode Dégradé 1 activé )
  while(led3 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin3, HIGH);
   delay(10);
   led3++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin3, HIGH);
  while(led4 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin4, LOW);
   delay(10);
   led4++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin4, HIGH);
  while(led5 < 600 && switchState1 == LOW){ 
   digitalWrite(ledPin5, LOW);
   delay(10);
   led5++;
   switchState1 = digitalRead(buttonSw1);
}
    digitalWrite(ledPin5, HIGH);
  while(timer < 15300 && switchState1 == LOW){
   delay(10);
   timer++;
   switchState1 = digitalRead(buttonSw1);
}
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
    led5 = 0;
    timer = 0;
}
digitalWrite(ledPin0, LOW);
led1 = 0;
led2 = 0;
led3 = 0;
led4 = 0;
led5 = 0;
timer = 0;

if(switchState2 == LOW);{ // Démarre le programme "Heavy Icing"
    if (switchState5 == LOW){ // Condition pour lancer le programme "Heavy Icing" avec le mode Dégradé 3
  while(led1 < 500 && switchState2 == LOW){
   digitalWrite(ledPin0, LOW);          
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState2 = digitalRead(buttonSw2);
}
   digitalWrite(ledPin1, HIGH);
  while(led2 < 100 && switchState2 == LOW){ 
   digitalWrite(ledPin2, LOW);
   delay(10);
   led2++;
   switchState2 = digitalRead(buttonSw2); 
}
   digitalWrite(ledPin2, HIGH);
  while(led3 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin3, LOW);
   delay(10);
   led3++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin3, HIGH);
  while(led4 < 30 && switchState2 == LOW){ 
   digitalWrite(ledPin4, LOW);
   delay(10);
   led4++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin4, HIGH);
  while(led5 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin5, LOW);
   delay(10);
   led5++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin5, HIGH);
  while(timer < 2500 && switchState2 == LOW){
   delay(10);
   timer++;
   switchState2 = digitalRead(buttonSw2);
}}
    else // Suite de la condition "if (switchState5 == LOW)" pour lancer le programme "Heavy Icing" sans le mode Dégradé 3
    if (switchState4 == HIGH) // Condition pour lancer le programme "Light Icing" sans le mode Dégradé 2
  while(led1 < 600 && switchState2 == LOW){
   digitalWrite(ledPin0, LOW);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState2 = digitalRead(buttonSw2);
}
    else // Suite de la condition "if (switchState4 == HIGH)" pour lancer le programme "Heavy Icing" avec le mode Dégradé 2
  while(led1 < 600 && switchState2 == LOW){
   digitalWrite(ledPin0, HIGH);          
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, HIGH);
   delay(10);
   led1++;
   switchState2 = digitalRead(buttonSw2);
}
   digitalWrite(ledPin1, HIGH);
  while(led2 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin2, LOW);
   delay(10);
   led2++;
   switchState2 = digitalRead(buttonSw2); 
}
   digitalWrite(ledPin2, HIGH);
   if (switchState3 == HIGH)
  while(led3 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin3, LOW);
   delay(10);
   led3++;
   switchState2 = digitalRead(buttonSw2);
}
   else
  while(led3 < 600 && switchState2 == LOW){
   delay(10);
   digitalWrite(ledPin3, HIGH);
   led3++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin3, HIGH);
  while(led4 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin4, LOW);
   delay(10);
   led4++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin4, HIGH);
  while(led5 < 600 && switchState2 == LOW){ 
   digitalWrite(ledPin5, LOW);
   delay(10);
   led5++;
   switchState2 = digitalRead(buttonSw2);
}
    digitalWrite(ledPin5, HIGH);
  while(timer < 3300 && switchState2 == LOW){
   delay(10);
   timer++;
   switchState2 = digitalRead(buttonSw2);
}
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
    led5 = 0;
    timer = 0;
}
digitalWrite(ledPin0, LOW);
led1 = 0;
led2 = 0;
led3 = 0;
led4 = 0;
led5 = 0;
timer = 0;

    if (switchState4 == HIGH) // Condition pour lancer le mode manuel "A" sans le mode Dégradé 2
       while (buttonState1 == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, LOW);
    buttonState1 = digitalRead(buttonPin1);
  }
    else // Condition pour lancer le mode manuel "A" avec le mode Dégradé 2
       while (buttonState1 == LOW) {  
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, HIGH);
    buttonState1 = digitalRead(buttonPin1);
  }
    if (switchState4 == HIGH) // Condition pour lancer le mode manuel "B" sans le mode Dégradé 2
       while (buttonState2 == LOW) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, LOW);
    buttonState2 = digitalRead(buttonPin2);
  }
    else // Condition pour lancer le mode manuel "B" avec le mode Dégradé 2
       while (buttonState2 == LOW) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, HIGH);
    buttonState2 = digitalRead(buttonPin2);
  }
    if (switchState3 == LOW) // Condition pour lancer le mode manuel "C" avec le mode Dégradé 1
       while (buttonState3 == LOW) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, LOW);
    buttonState3 = digitalRead(buttonPin3);
  }
    else if (switchState4 == LOW) // Condition pour lancer le mode manuel "C" avec le mode Dégradé 2
       while (buttonState3 == LOW) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, HIGH);
    buttonState3 = digitalRead(buttonPin3);
  }
    else // Condition pour lancer le mode manuel "C" sans mode Dégradé
       while (buttonState3 == LOW) {  
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, LOW);
    buttonState3 = digitalRead(buttonPin3);
  }
   if (switchState4 == HIGH) // Condition pour lancer le mode manuel "D" "Light Icing" sans le mode Dégradé 2
       while (buttonState4 == LOW) { 
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, LOW);
  buttonState4 = digitalRead(buttonPin4);
  }
    else // Condition pour lancer le mode manuel "D" avec le mode Dégradé 2
       while (buttonState4 == LOW) { 
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, HIGH);
  buttonState4 = digitalRead(buttonPin4);
  }
    if (switchState4 == HIGH) // Condition pour lancer le mode manuel "E" "Light Icing" sans le mode Dégradé 2
       while (buttonState5 == LOW) {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin0, LOW);
    buttonState5 = digitalRead(buttonPin5);
  }
    else // Condition pour lancer le mode manuel "E" avec le mode Dégradé 2
         while (buttonState5 == LOW) {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin0, HIGH);
    buttonState5 = digitalRead(buttonPin5);
  }
// Boucle pour laisser chaque sortie à l'état haut
    while (buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH && buttonState5 == HIGH && switchState1 == HIGH && switchState2 == HIGH) {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin0, HIGH);
    buttonState1 = digitalRead(buttonPin1);
    buttonState2 = digitalRead(buttonPin2);
    buttonState3 = digitalRead(buttonPin3);
    buttonState4 = digitalRead(buttonPin4);
    buttonState5 = digitalRead(buttonPin5);
    switchState1 = digitalRead(buttonSw1);
    switchState2 = digitalRead(buttonSw2);
  }
}
