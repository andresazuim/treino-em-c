//Leia um numero real e imprima a quinta parte deste numero.

#include <stdio.h>

int main()
{
    
    float nR,part;

    printf("Escreva um numero real: ");
    scanf("%f", &nR);

    printf("A quinta parte deste numero é: %f", nR/5);
    
    return 0;
}
