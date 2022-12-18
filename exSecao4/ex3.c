/*Leia um numero real. Se o número for positivo imprima a raiz quadrada. 
Do contrário imprima o numero ao quadrado. */

#include <stdio.h>
#include <math.h>

int main()
{
    float num,result;

    printf("Informe um número: ");
    scanf("%f", &num);

    if (num > 0)
    {
        result = sqrt(num);
        printf("A raiz quadrada é %.3f", result);
    }else{
        printf("Esse número ao quadrado é %.3f", num * num);
    }
    return 0;
}

