#include<stdio.h> 
#include<locale.h> 
#include<stdbool.h>
#include<windows.h>

bool ehPar(int numero){ 
    return(numero % 2 == 0);
}


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
float valor, cotacao; 

printf("Digite um valor em reais: "); 
scanf ("%f", &valor);
printf ("Digite a cotacão do dolar: "); 
scanf("%f", &cotacao); 

printf ("Valor em dolares: %.2f\n", valor / cotacao); 

   return 0; 
}