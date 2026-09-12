#include<stdio.h> 
#include<locale.h> 
#include<stdbool.h>
#include<windows.h>

bool ehPar(int numero){ 
    return(numero % 2 == 0);
}


int main(){   


float raio; 
const float PI = 3.14159; 

printf("Digite o raio do circulo"); 
scanf("%f", &raio); 

printf("Area: %.2f\n", PI * raio *raio); 
printf("Perimetro: %.2f\n", 2 * PI * raio);
 
   return 0; 
}