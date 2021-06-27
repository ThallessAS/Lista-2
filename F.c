#include<stdio.h>
#include<stdlib.h>

int main(){
    float L, area_quadrado;
    
    printf("Valor: lado do quadrado\n");
    scanf("%f", &L);
    
    area_quadrado= L*L;

    printf("\nArea do quadrado: %.2f M^2", area_quadrado);
}
