#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  


int n; 
printf("Digite um numero:");
scanf("%d", &n); 

if(n % 3 == 0 && n % 5 ==0){
  printf("Multiplo de 3 e 5\n");
}else if(n % 3 ==0){
  printf("Multiplo de 3\n");
}else if(n % 5 == 0){
  printf("Multiplo de 5\n");
}else{
  printf("Não e multiplo de 3 nem de 5\n");
}
 

      
   return 0;
}

