/*Escreva um programa que escreva na tela, de 1 a 100, 
de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição 
for, a segunda while, e a terceira do while.*/

#include <stdio.h>

int main()
{

    int w = 1, a = 1;
    for (int i = 1; i <= 100; i++)
    {
        printf("Comando For: %d \n", i);
    }

    while ( w <= 100)
    {
        printf("Comando while: %d \n", w);
        w ++;
    }

    do
    {
       
        printf("Comando do... while: %d \n", a ++);
    } while (a <= 100);
    
    
    

    return 0;

}
