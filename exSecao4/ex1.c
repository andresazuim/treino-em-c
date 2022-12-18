/*Faça um programa que receba dois números e mostre qual deles é o maior*/

#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Informe um número :");
    scanf("%f", &n1);
    printf("Informe um número :");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("O número %f é maior! ", n1);
    }else{
        printf("O número %f é maior! ", n2);
    }
    
    return 0;
}
