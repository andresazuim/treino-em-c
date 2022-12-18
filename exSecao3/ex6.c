/*leia uma temperatura em graus celsius e apresente-a 
convertida em graus fahreit.A formula de conversao é
F = C(9.0/5.0)+32, sendo F a temperatura em Fahrenheit
e C a temperatura em Celcius*/

#include <stdio.h>

int main()
{
    float tempC,tempF;

    printf("Informe a temperatura em ºC: ");
    scanf("%f", &tempC);

    tempF = tempC * (9.0/5.0)+32;
  
    printf("\nA temperatura em Fahrenheit é: %f ", tempF);


    return 0;
}


