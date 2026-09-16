#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
  int diadaSemana; 

  printf("digite um numero de (1 a 7): "); 
  scanf("%d", &diadaSemana); 

  if(diadaSemana == 1){
    printf("domingo!");
  }else if(diadaSemana == 2){
    printf("Segunda-feira");
  }else if(diadaSemana == 3){
    printf("Terça-feira");
  }else if(diadaSemana == 4){
    printf("Quarta-feira");
  }else if(diadaSemana == 5){
    printf("Quinta-feira");
  }else if(diadaSemana == 6){
    printf("Sexta-feira");
  }else if(diadaSemana == 7){
    printf("sabado!");
  }else{
    printf("valor invalido!");
  }
 return 0;
}

