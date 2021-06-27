#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, M;
    
    printf("Coloque seu peso Kg: ");
    scanf("%d", &n1);
    
    M= n1 * 1000;
    
    printf("Seu peso em gramas eh: %d G", M);
}
