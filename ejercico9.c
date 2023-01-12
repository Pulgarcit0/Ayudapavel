#include <stdio.h>

int main() {
    
      long int i, n1 = 0, n2 = 1, next,num;
    printf("Ingrese los numeros que quiere en la sierie de fibonacci");
    scanf("%d",&num);
    
    printf("Fibonacci Series: %d, %d, ", n1, n2);
    for (i = 2; i <=num; i++) {
        next = n1 + n2;
        printf(",%d ", next);
        n1 = n2;
        n2 = next;
    }
    
    return 0;
}
