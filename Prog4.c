#include <stdio.h>

int main()
{
    int dia;
    //input do numero
    printf("Diga o seu numero\n");
    scanf(" %d", &dia);
    //defenição do dia
    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;

    default:
    printf("Esse numero nao existe");
        break;
    }
    return 0;
}