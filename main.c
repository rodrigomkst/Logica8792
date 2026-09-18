#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

 int opcao;

 printf("--- SISTEMA DE PEDAGIO ---\n");
 printf("1 - moto\n");
 printf("2 - carro passeio\n");
 printf("3 - caminhão\n");
 printf("4 - onibus\n");
 scanf("%d", &opcao);

switch (opcao)
 {
  case 1: 
    printf("Categoria: moto | tarifa R$ 5,00\n");
    break;
  case 2:
    printf("categoria: carro passeio | tarifa R$ 10,00\n");
    break;
  case 3: 
    printf("categoria: caminhao | tarifa: R$ 25,00\n"); 
    break;
  case 4:
    printf("categoria: onibus | tarifa: R$ 20,00\n");
    break;
   default:
    printf("erro: categoria nao cadastrada no sistema. \n");
    break;
 }

    
      
   return 0;
}

