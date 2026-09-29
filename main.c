#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n; 

printf("De que tamanho sera o quadrado: ");
scanf("%d", &n);

for(int i = 0; i <= n; i++){
   for(int j = 1; j <= n; j++){
      printf(" * ");
      printf("\t");
   }
     printf("\n");
   
}

   return 0;
}

