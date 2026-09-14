#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int idade; 

printf("digite uma idade:" );
scanf("%d", &idade); 

if (idade >= 18){
    printf("voce e maior de idade!"); 
}else{
    printf("voce e menor de idade!"); 
    
}

   return 0; 
}