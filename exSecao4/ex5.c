/*Faça um programa que receba um número inteiro,
 e verifique se ele é par ou impar*/


 #include <stdio.h>

 int main()
 {
    int num;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O número %d é PAR! ", num);
    }else{
        printf("O número %d é IMPAR! ", num);
    }
    
    
    return 0;
 }
 