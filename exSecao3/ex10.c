/*Leia uma velocidade em km/h (quilomentros por hora) e apresente-a 
convertida em m/s (metros por segundo). a formula de conversãp é 
M = K/3.6, sendo K a velocidade  em km/h e M em m/s.*/

#include <stdio.h>

int main()
{
    
    float velKm, velMs;

    printf("Informe a velocidade em Km/h: ");
    scanf("%f", &velKm);

    velMs = velKm / 3.6;

    printf("A velocidade em m/s é: %f", velMs);

    return 0;
}
