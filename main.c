#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

int ano; 
printf("Digite o ano: "); 
scanf("%d", &ano); 

if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("Ano: %d\n", ano);
    printf("Ano bissexto!\n");
}else{
    printf("Ano: %d\n", ano);
    printf("Ano NÂO bissexto!\n");
}
 

      
   return 0;
}

