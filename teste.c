#include <stdlib.h>
#include <stdio.h>

int main(){

    int valor;

    printf("\ndigite um valor:");
    scanf("%i", &valor);

    if(valor%2==1){

        printf("\nValor impar\n");
    }

    else printf("\nValor par\n");

    return 0;
}