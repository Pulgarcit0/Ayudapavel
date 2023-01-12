// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double n=0;
    printf("Numero a calcular: ");
    scanf("%lf",&n);
    double x = n;
    double prev_x;
    double tolerance = 0.0001;

    while (1) {
       prev_x = x;
       x = (x + n/x) / 2;
       if (fabs(x - prev_x) < tolerance) {
        break;
    }
}
printf("La raiz cuadrada de %lf es %lf", n, x);

}
