//leia um numero real e imprima o resultado do quadrado desse numero

#include <stdio.h>

int main()
{
    float n1,quad;
    
    printf("Escreva um numero: ");
    scanf("%f", &n1);

    quad = n1 * n1;
    printf("o valor do munero ao quafrado é: %f", quad);

    return 0;
}
