/*Faça um algoritimo utilizando o comando while que mostra uma contagem 
regressiva na tela , iniciando em 10 e terminando em 0. Mostrar uma 
mensagem de "FIM!" após a contagem.*/

#include<stdio.h>

int main()
{
    
    int i = 10; 
    while (i >= 0)
    {
        printf("%d \n", i);
        i = i -1;
    }

    printf("FIM!!! ");
    
    return 0;
}
