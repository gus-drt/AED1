#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Digite o raio do círculo: "); 
    scanf("%f", &raio);
    area = M_PI * raio * raio;
    
    printf("A área do círculo é: %.2f\n", area);
    
    return 0;
}