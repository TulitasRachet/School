#define ledrojo0 0
#define ledrojo5 5
#define ledverde7 7
#define ledamarillo6 6
#define ledverde2 2
#define ledamarillo1 1
void setup() {
  pinMode(0, OUTPUT); //Configuración de la conexión D0 como salida
  pinMode(7, OUTPUT); //Configuración de la conexión D7 como salida
  pinMode(6, OUTPUT); //Configuración de la conexión D6 como salida
  pinMode(2, OUTPUT); //Configuración de la conexión D2 como salida
  pinMode(1, OUTPUT); //Configuración de la conexión D1 como salida
  pinMode(5, OUTPUT); //Configuración de la conexión D1 como salida
}
void loop() {
  digitalWrite(ledrojo0, HIGH); 
  digitalWrite(ledverde7, HIGH); 
  delay(5000);
  digitalWrite(ledverde7, LOW); 
  delay(500); 
  digitalWrite(ledverde7, HIGH); 
  delay(500); 
  digitalWrite(ledverde7, LOW);
  delay(500); 
  digitalWrite(ledverde7, HIGH); 
  delay(500);
  digitalWrite(ledverde7 , LOW); 
  delay(500); 
  digitalWrite(ledverde7, HIGH); 
  delay(500); 
  digitalWrite(ledverde7, LOW); 
  delay(500); 
  digitalWrite(ledverde7, HIGH); 
  delay(500); 
  digitalWrite(ledverde7, LOW); 
  delay(500);
  digitalWrite(ledverde7, HIGH);  
  digitalWrite(ledverde7, LOW);  
  digitalWrite(ledverde7, HIGH);
  delay(500);  
  digitalWrite(ledverde7, LOW);
  digitalWrite(ledamarillo6, HIGH);
  delay(3000);  
  digitalWrite(ledamarillo6, LOW); 
  digitalWrite(ledrojo0, LOW);
  digitalWrite(ledrojo5, HIGH);
  digitalWrite(ledverde2, HIGH);  
  delay(5000);  
  digitalWrite(ledverde2, LOW);  
  delay(500);  
  digitalWrite(ledverde2, HIGH);  
  delay(500);  
  digitalWrite(ledverde2, LOW);  
  delay(500);  
  digitalWrite(ledverde2, HIGH);  
  delay(500);  
  digitalWrite(ledverde2, LOW);  
  delay(500);  
  digitalWrite(ledverde2, HIGH);  
  delay(500);  
  digitalWrite(ledverde2, LOW);  
  delay(500);  
  digitalWrite(ledverde2, HIGH);  
  delay(500);  
  digitalWrite(ledverde2, LOW);  
  delay(500);  
  digitalWrite(ledverde2, HIGH);  
  delay(500);  
  digitalWrite(ledverde2, LOW);
  digitalWrite(ledamarillo1, HIGH); 
  delay(3000); 
  digitalWrite(ledamarillo1, LOW); 
  digitalWrite(ledrojo0, HIGH); 
  digitalWrite(ledrojo5, LOW); 
}
