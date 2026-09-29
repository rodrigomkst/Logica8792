#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n;
printf("Digite o tamanho do triangulo");
scanf("%d", &n);

for(int i = n; i >= 1; i--){
   for(int j = 1; j <= i; j++){
      printf(" * ");
   }
   printf("\n");
}

   return 0;
}

