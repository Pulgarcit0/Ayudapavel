#include <stdio.h>

int main() {
    int dia = 30;
    int mes = 4;
    int annio = 2010;
    int intervalo;
    int d=dia,m=mes,a=annio;
    printf("Introduce ek intervalo: ");
    scanf("%d",&intervalo);
    
    dia = dia + intervalo;
    while(dia > 28) {
        if (mes == 2) {
            if ((annio % 4 == 0 && annio % 100 != 0) || annio % 400 == 0) {
                if (dia > 29) {
                    dia -= 29;
                    mes++;
                }
            } else {
                if (dia > 28) {
                    dia -= 28;
                    mes++;
                }
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia > 30) {
                dia -= 30;
                mes++;
            }
        } else {
            if (dia > 31) {
                dia -= 31;
                mes++;
            }
        }
    }

    if (mes > 12) {
        mes -= 12;
        annio++;
    }

    printf("La fecha antes de %d días es: %d/%d/%d\n", intervalo, d, d, a);
    printf("La fecha después de %d días es: %d/%d/%d\n", intervalo, dia, mes, annio);

    return 0;
}
