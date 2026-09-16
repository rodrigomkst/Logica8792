#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int idade; 
int ehEstudante;

printf("qual sua idade?");
scanf("%d", &idade); 
printf("\nvoce e estudante (0 - nao | 1 - sim):");
scanf("%d", &ehEstudante); 

if((idade >= 60 ) && (ehEstudante == 1)){
  printf("parabens, voce tem direito a desconto!");
}else{
  printf("infelizmente voce nao tera desconto!");
}

 return 0;
}

