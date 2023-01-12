#include <stdio.h>

int main() {
    int fac;
    int res=0;
    printf("Ingresa el numero factorial \n!");
    scanf("%d",&fac);
    for(int i=0;i<=fac;i++){
        res += i;       
        }
    printf("%d",res);
}
