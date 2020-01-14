#include <stdio.h>

int main(){
    float grausFahrenheit;
    float grausCelcius;
    float conversao;
    //input de  Fahrenheit
    printf("Diga a temperatura em graus Fahrenheit\n");
    scanf(" %f", &grausFahrenheit);
    
    //conversão
    conversao =( grausFahrenheit - 32) / 1.8000;
    // print resultado
    printf("Corresponde a %f graus celcius", conversao);

    return 0;
}