// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //
    int num,num2,suma,suma2;
    int i;
     printf("Primer valor: ");
    scanf("%d",&num);
     printf("Segundo valor: ");
    scanf("%d",&num2);
    
    for(i=1;i<num;i++){
        if(num%i==0){
            suma+=i;
            }
    }
    int j;
    for(j=1;j<num2;j++){
        if(num2%j==0){
            suma2+=j;
            }
    }
    if(num==suma2){
        printf("LOS NUMEROS SON MEJORES AMIGOS");
    }
}
