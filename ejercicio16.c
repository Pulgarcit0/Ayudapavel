#include <stdio.h>
#include <stdbool.h>

int main() {
    int n =100,res;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            res+=i;
        }
    }
    printf("La suma es: %d",res);
}
