#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int voto; 

printf("---DIGITE O NÚMERO DO ELEITOR---");
scanf("%d", &voto);

if(voto = 10){
   printf("Manuel");
}else if(voto = 20){
   printf("Carla");
}else if(voto = 30){
   printf("Bianca");
}else if(voto = 40){
   printf("Henrique");
}else if(voto = 50){
   printf("Bruno");
}else{
   printf("Escolha um candidato valido!");
}


   
   
   
   return 0; 
}
