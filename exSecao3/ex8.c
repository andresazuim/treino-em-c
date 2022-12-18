/*leia uma temperatura em graus Kelvin e apresente-a 
convertida em graus celsius.A formula de conversao é
C = K - 273.15, sendo C a temperatura em Celcius
e K a temperatura em Kelvin*/

#include <stdio.h>

int main()
{
   
    float tempK, tempC;

    printf("Informe a temperatura em graus Kelvin: ");
    scanf("%f", &tempK);

    tempC = tempK - 273.15;

    printf("A temperatura em graus Celcius é: %f", tempC);

    return 0;
}
