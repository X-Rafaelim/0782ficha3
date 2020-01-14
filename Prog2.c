#include <stdio.h>

int main(){
    float numero;
    float numeroSucessor;
    float numeroAntecessor;
    //input
    printf("Diga um numero\n");
    scanf(" %f", &numero);
    //contas dos numeros
    numeroAntecessor = numero - 1;
    numeroSucessor = numero + 1;
    //print ao user
    printf("O numero Antecessor e %f e o sucessor e %f", numeroAntecessor, numeroSucessor);

    return 0;
}