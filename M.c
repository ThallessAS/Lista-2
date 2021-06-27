#include<stdio.h>
#include<stdlib.h>

int main(){
    float reais, dolares, marco_alemao, libra_esterlina;  
    
    printf("Valor: R$");
    scanf("%f", &reais); 

    dolares= reais / 3.95;
    marco_alemao= reais / 4.25;
    libra_esterlina= reais / 5.80;

    printf("\nCotacao em: %.2f dolares", dolares);
    printf("\nCotacao em: %.2f marco alemao", marco_alemao);
    printf("\nCotacao em: %.2f libra esterlina", libra_esterlina);
}
