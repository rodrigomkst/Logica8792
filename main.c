#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int numero;
printf("Digite um numero positivo: ");
scanf("%d", numero);

while(numero <= 0){
   printf("Numero invalido! digite novamente: ");
   scanf("%d", &numero);

}

printf("Numero valido: %d\n", numero);

   return 0;
}

