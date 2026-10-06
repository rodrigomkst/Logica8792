#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int numero;
int sucesso;

do{
   printf("Digite um número maior que 0: ");
  sucesso = scanf("%d", &numero);

  if(sucesso != 1){
   printf("Entrada invalida! Digite apenas números inteiros.\n");
   while(getchar() != '\n'); 
   numero = 0;

  }
  
  
}while(numero <= 0);

printf("Voce digitou %d, que é valido!\n", numero);

   return 0; 
}
