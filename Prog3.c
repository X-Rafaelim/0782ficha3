#include <stdio.h>

int main(){
    float dinheiroTotal = 500000.00;
    float primeiro;
    float segundo;
    float terceiro;
    //calculos 
    primeiro = dinheiroTotal * 0.46;
    segundo = dinheiroTotal * 0.32;
    terceiro = dinheiroTotal - primeiro - segundo;
    // prints aos users
    printf("Primeiro recebe %f\n", primeiro);
    printf("O segundo recebe %f\n",segundo);
    printf("O terceiro recebe %f", terceiro);

    return 0;
    

}