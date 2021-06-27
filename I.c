#include<stdlib.h>
#include<stdio.h>

int main(){
    int ano_nasc, ano_atual, R;
    
    printf("Data de nascimento e Ano atual: ");
    scanf("%d %d", &ano_nasc, &ano_atual);
    
    R= ano_atual - ano_nasc;

    printf("\nIdade em anos: %d", R);
    printf("\nIdade em meses: %d", R*12);
    printf("\nIdade em semanas: %d", R*12*4);
    printf("\nIdade em dias: %d", R*12*4*7);
}
