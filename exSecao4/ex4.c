/*Faça um programa que leia um numero e, caso ele seja positivo, 
calcule e mostre:
    * O número digitado ao quadrado
    * a raiz quadrada do número digitado */

#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Informe um número: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("Este número ao quadrado é %.3f", num * num);
        printf("\nA raiz quadrada deste numero é %.3f", sqrt(num));
    }else{
        printf("Número Inválido!!! ");
    }
    
    return 0;
}
