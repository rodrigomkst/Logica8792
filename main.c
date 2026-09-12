#include<stdio.h> 
#include<locale.h> 
#include<stdbool.h>
#include<windows.h>

bool ehPar(int numero){ 
    return(numero % 2 == 0);
}


int main(){   


float n1, n2, n3, media; 

printf("Digite tres notas: "); 
scanf("%f %f %f", &n1, &n2, &n3); 
media = (n1 + n2 + n3) / 3;

printf("Medias: %2.f\n", media);
 
   return 0; 
}