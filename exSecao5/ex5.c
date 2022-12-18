/*Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>

int main()
{

    int num, soma;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &num);
        
        soma= soma + num;

    }

        printf("O resultado da soma final foi: %d", soma);
    
    return 0;
}
