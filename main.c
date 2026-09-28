#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int contador = 0;

for(int i = 0; i <= 9; i++){
   for(int j = 0; j <= 9; j++){
      for(int x = 0; x <= 9; x++){
         for(int y = 0; y <= 9; y++){
            contador++;
   
   printf("Os possiveis resultados do cadeado: %d %d %d %d\n", i, j, x, y);
         }
      }
   }
}
 
 printf("O numero total de iterações: %d\n", contador);
   return 0;
}

