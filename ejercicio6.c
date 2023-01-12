// Online C compiler to run C program onlin
#include <stdio.h>

int main(){
    int dat,res,pron; 
    printf("Ingrese cantidad de numero: ");
    scanf("%d",&dat);
    int i =0;
    
    do {
        int dat; 
        printf("Ingrese el numero: ");
        scanf("%d",&dat);
        res+=dat;
        i++;
    } while (i < dat);
    
    printf("%d",(res/dat));
}
