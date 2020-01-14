#include <stdio.h>
//programa  para fazer calculos com if
int main(){
    int menu = 1;
    float numero1;
    float numero2;
    float conta;
    //menu para mostrar escolhas
    printf("-------------------Menu-------------------\n");
    printf("1- Multiplicação\n");
    printf("2- Divisão\n");
    printf("3- Adição\n");
    printf("4- Subtração\n");
    //input escolha
    scanf(" %d", &menu);
    //fazer calculos atraves do numero do menu
    if (menu == 1)
    {
        //input dos users
        printf("Diga o primeiro numero\n");
        scanf(" %f", &numero1);
        printf("Diga o segundo numero \n");
        scanf(" %f", &numero2 );
        //calculos
        conta = numero1 * numero2;
        printf("O seu resultado foi %f", conta);

    }
    else if (menu == 2)
    {
        //input dos users
        printf("Diga o primeiro numero\n");
        scanf(" %f", &numero1);
        printf("Diga o segundo numero \n");
        scanf(" %f", &numero2 );
        //calculos
        conta = numero1 / numero2;
        printf("O seu resultado foi %f", conta);
    }
    else if (menu == 3)
    {
        //input dos users
        printf("Diga o primeiro numero\n");
        scanf(" %f", &numero1);
        printf("Diga o segundo numero \n");
        scanf(" %f", &numero2 );
        //calculos
        conta = numero1 + numero2;
        printf("O seu resultado foi %f", conta);

    }
    else if (menu == 4)
    {
        //input dos users
        printf("Diga o primeiro numero\n");
        scanf(" %f", &numero1);
        printf("Diga o segundo numero \n");
        scanf(" %f", &numero2 );
        //calculos
        conta = numero1 - numero2;
        printf("O seu resultado foi %f", conta);
    }

    return 0;
    
    
    
    
}