#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_fixo, comicao, salario_final;

    printf("Digite o valor do salario fixo: ");
    scanf("%f", &salario_fixo);

    comicao = salario_fixo * 0.04;
    salario_final = salario_fixo + comicao;

    printf("Comicao: %.2f\n", comicao);
    printf("Salario final: %.2f", salario_final);

}
