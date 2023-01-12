// Online C compiler to run C program onlin
#include <stdio.h>

int main(){
    int i=1;
    int res=0;
    
    while ( i<=8) {
    int dat; 
    printf("Ingrese el numero: ");
    scanf("%d",&dat);
    res+=dat;
    i++;
}

printf("resultado; %d",res);

}
