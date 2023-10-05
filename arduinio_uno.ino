#include <LiquidCrystal.h>

const int rs = 8, en = 7, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
const int btnSeleccion = 2;    // Primer botón de selección de variable
const int btnCapturar = 3;     // Botón de captura que debe ser pulsado 8 veces
const int btnBurbuja = 4;      // Botón para ordenar usando el método de burbuja
const int btnInsercion = 5;    // Botón para ordenar usando el método de inserción
const int btnSeleccionOrden = 6; // Botón para ordenar usando el método de selección
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int Pot1 = A0; // Pin analógico para el primer potenciómetro (voltaje)
int Pot2 = A1; // Pin analógico para el segundo potenciómetro (temperatura)
int Pot3 = A2; // Pin analógico para el tercer potenciómetro (presión)
float VP = 0, Temp = 0, Presion = 0;
int variableActual = 1; // Variable actual que se muestra en el LCD (1: voltaje, 2: temperatura, 3: presión)

int contadorCapturar = 0; // Contador de veces que se ha pulsado el botón de captura

void setup() {
  lcd.begin(20, 4);
  lcd.print("8 veces");
  delay(2000);  // Muestra "8 veces" durante 2 segundos
  lcd.clear(); // Limpia la pantalla
  lcd.print("Potenciometros");
  pinMode(btnSeleccion, INPUT);
  pinMode(btnCapturar, INPUT);
  pinMode(btnBurbuja, INPUT);
  pinMode(btnInsercion, INPUT);
  pinMode(btnSeleccionOrden, INPUT);
  delay(2000);
  lcd.clear();
}

void loop() {
  VP = analogRead(Pot1);
  Temp = analogRead(Pot2);
  Presion = analogRead(Pot3);

  // Conversión de datos (igual que antes)

  lcd.setCursor(0, 0);
  lcd.print("Variable: ");
  lcd.print(variableActual);

  // Muestra la variable correspondiente en el LCD (igual que antes)

  // Verifica si el botón de selección de variable está presionado (igual que antes)

  // Verifica si el botón de captura está presionado
  if (digitalRead(btnCapturar) == HIGH) {
    delay(200); // Espera para evitar rebotes del botón
    contadorCapturar++; // Incrementa el contador de veces que se ha pulsado el botón de captura

    if (contadorCapturar >= 8) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Metodo de ordenamiento");
      lcd.setCursor(0, 1);
      lcd.print("1: Burbuja  2: Insercion  3: Seleccion");
    }
  }

  // Verifica si se ha seleccionado uno de los métodos de ordenamiento
  if (contadorCapturar >= 8) {
    if (digitalRead(btnBurbuja) == HIGH) {
      // Implementa el método de ordenamiento de burbuja aquí y muestra los datos ordenados
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Ordenado (Burbuja)");
      // Implementa el ordenamiento aquí y muestra los resultados
      delay(2000); // Espera para mostrar los resultados
      lcd.clear();
      contadorCapturar = 0; // Reinicia el contador
    }

    if (digitalRead(btnInsercion) == HIGH) {
      // Implementa el método de ordenamiento por inserción aquí y muestra los datos ordenados
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Ordenado (Insercion)");
      // Implementa el ordenamiento aquí y muestra los resultados
      delay(2000); // Espera para mostrar los resultados
      lcd.clear();
      contadorCapturar = 0; // Reinicia el contador
    }

    if (digitalRead(btnSeleccionOrden) == HIGH) {
      // Implementa el método de ordenamiento por selección aquí y muestra los datos ordenados
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Ordenado (Seleccion)");
      // Implementa el ordenamiento aquí y muestra los resultados
      delay(2000); // Espera para mostrar los resultados
      lcd.clear();
      contadorCapturar = 0; // Reinicia el contador
    }
  }

  delay(100);
}
