#include<stdlib.h>
#include<stdio.h>

int main(){
    float salario_minimo, salario_funcionario, D;
    
    printf("Digite salario minimo e o salario do funcionario: ");
    scanf("%f %f", &salario_minimo, &salario_funcionario);
    
    D= salario_minimo / salario_funcionario;
    
    printf("\nEsse funcionario recebe: %.2f Salarios Minimos", D);
}
