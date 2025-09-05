#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main () {
    float celsius, fahreinheit;
    printf("Digite a temperatura em ºC: "); 
    scanf("%f", &celsius);
    fahreinheit = 1.8*celsius+32;
    printf("%.2ffºC é equivalente a %.2fºF", celsius, fahreinheit);

    return 0;
}