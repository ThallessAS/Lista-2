#include<stdio.h>
#include<stdlib.h>

int main (){
    float C, F;
    
    printf("Coloque a temperatura em Celsius: ");
    scanf("%f", &C); 

    F = (C * 9/5) + 32; 
    
    printf("\nSua temperatura em fahrenheit: %.2f fahrenheit", F);
}
