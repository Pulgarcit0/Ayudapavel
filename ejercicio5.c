// Online C compiler to run C program onlin
#include <stdio.h>

int main(){
    int i=1;
    int res=0;
    
    int cant; 
    printf("Ingrese la cantidad de numero a sumae >OJO<");
    scanf("%d",&cant);
    
    while ( i<=cant) {
    int dat; 
    printf("Ingrese el numero: ");
    scanf("%d",&dat);
    res+=dat;
    i++;
}

printf("resultado; %d",res);

}
