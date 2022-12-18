/*Leia um número fornecido pelo usuario. Se esse numero for positivo,
calcule a raiz quadrada do número. Se o número for negativo, mostre 
uma mensagem dizendo que o número é invalido. */

#include <stdio.h>
#include <math.h>


int main()
{
    
    float n1, result;

    printf("Informe um número: ");
    scanf("%f",&n1);

    if (n1 > 0)
    {
        result = sqrt(n1);
        printf("A raiz quadrada do número digitado é: %.3f", result);
    }else{
        printf("Número informado inválido!!!");
    }
    
    
    return 0;
}
