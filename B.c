#include<stdio.h>
#include<stdlib.h>

int main()
{
    float preco, final;

    printf("Digite o preco:\n");
    scanf("%f", &preco);

    final = preco * 0.9;

    printf("Seu preco com desconto eh: %.2f", final);
}
