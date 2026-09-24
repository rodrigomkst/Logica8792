#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n, soma = 0;

printf("Digite um valor");
scanf("%d\n", &n);

for(int i = 1; i <= n; i++){
   //soma = soma + i;
   soma += i;
}
         printf("o resultado da soma e: %d\n", soma);






   return 0;
}

