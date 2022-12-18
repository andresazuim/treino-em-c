/*leia uma temperatura em graus Celcius e apresente-a 
convertida em graus Kelvin.A formula de conversao é
K = C + 273.15, sendo C a temperatura em celsius
e K a temperatura em Kelvin*/

#include <stdio.h>

int main()
{
    
    float tempC, tempK;

    printf("Informe a temperatura em gruas Celcius: ");
    scanf("%f", &tempC);

    tempK = tempC + 273.15;

    printf("A temperatura em Kelvin é: %f", tempK);

    return 0;
}
