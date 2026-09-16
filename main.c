#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
  int diadaSemana; 

  printf("digite um numero de (1 a 7): "); 
  scanf("%d", &diadaSemana); 

  switch(diadaSemana){
    case 1: 
      printf("domingo!"); 
      break;
    case 2: 
      printf("Segunda-feira"); 
      break;
    case 3:
      printf("Terça-feira");
      break;
    case 4:
      printf("Quarta-feira");
      break;
    case 5: 
      printf("Quinta-feira");
      break;
    case 6:
      printf("Sexta-feira");
      break;
    case 7:
      printf("Sabado!");
      break;
    
    default:
      printf("numero invalido!!");
      break;
  }
 
 
 
 return 0;
}

