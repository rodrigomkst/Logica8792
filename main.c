#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n, invertido = 0, resto;

printf("Digite um numero...");
scanf("%d", &n);

   while (n != 0);{
      resto = n % 10;
      invertido = invertido * 10 + resto;
      n /= 10;
   }
printf("O numero ao contrario sera: %d\n",invertido);

   return 0;
}

