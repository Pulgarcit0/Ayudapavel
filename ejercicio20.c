#include <stdio.h>

int main() {
  int day, month;
  char* zodiac;
  
  printf("Ingrese día de nacimiento: ");
  scanf("%d", &day);
  printf("Ingrese mes de nacimiento: ");
  scanf("%d", &month);
  
  if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
    zodiac = "Aries";
  } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
    zodiac = "Tauro";
  } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
    zodiac = "Géminis";
  } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
    zodiac = "Cáncer";
  } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
    zodiac = "Leo";
  } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
    zodiac = "Virgo";
  } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
    zodiac = "Libra";
  } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
    zodiac = "Escorpio";
  } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
    zodiac = "Sagitario";
  } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
    zodiac = "Capricornio";
  } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
    zodiac = "Acuario";
  } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
    zodiac = "Piscis";
  }
  
  printf("Tu signo zodiacal es: %s\n", zodiac);
  
  return 0;
}
