/*leia uma temperatura em graus fahreit e apresente-a 
convertida em graus celsius.A formula de conversao é
C = 5.0*(F - 32)/9.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celcius*/

#include <stdio.h>

int main()
{
    float tempF,tempC;
    
    printf("Informe a temperatura Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = 5.0*(tempF - 32)/9.0;

    printf("A temperantura em Celsius é : %f", tempC);

    return 0;
}
