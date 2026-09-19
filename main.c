#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

float peso, altura, imc;

printf("digite o peso (kg): ");
scanf("%f", &peso); 

printf("Digite a altura (m): ");
scanf("%f", &altura);

imc = peso / (altura * altura);

if(imc < 18.5){
    printf("Classificaçao: abaixo do peso!\n");
}else if(imc < 25){
    printf("Classificaçao: peso normal!\n");
}else if(imc < 30){
    printf("Classificaçao: sobrepeso!\n");
}else{
    printf("Classificaçao: obesidade\n");
}
 

      
   return 0;
}

