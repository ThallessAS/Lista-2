#include <stdio.h>
#include <stdlib.h>

int main(){
    float B, b, h, area_trapezio;
    
    printf("Digite: base maior; base menor; altura \n");
    scanf("%f %f %f", &B, &b, &h);
    
    area_trapezio= ((B+b) * h ) / (2);
    
    printf("\nArea do trapezio eh: %.2f M^2", area_trapezio);
}
