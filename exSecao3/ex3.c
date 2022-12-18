//Peça ao usiario para digitar tras valores inteiro e imprima a soma deles.

#include <stdio.h>

int main()
{

    int n1,n2,n3,soma;
    
    printf("Digite o primeiro numero: ");
    scanf( "%d", &n1);

    printf("Digite o primeiro numero: ");
    scanf( "%d", &n2);

    printf("Digite o primeiro numero: ");
    scanf( "%d", &n3);

    soma = n1 + n2 + n3;

    printf("o resultado da soma é: %d",soma);

    return 0;
}
