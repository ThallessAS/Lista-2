#include<stdio.h>
#include<stdlib.h>

int main(){
    int L1, L2, A;
    
    printf("Insira o comprimento e largura do comodo: ");
    scanf("%d %d", &L1, &L2);

    A= L1 * L2;

    printf("\nArea do comodo: %d M^2", A);
    printf("\nPotencia destinada ao comodo: %d W", A*18);
}
