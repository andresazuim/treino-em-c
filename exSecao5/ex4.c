/*Escreva um programa que declare um inteiro, inicialize-o com 0,
e incremente-o de 1000 em 1000, imprimindo seu valor na tela, ate que 
seu valor seja 100000 (cem mil.)*/

#include<stdio.h>

int main()
{
    int num;

    for (num= 0; num <= 100000;num += 1000)
    {
    
        printf("%d\n ", num);
         

    }


    return 0;
}
