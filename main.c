#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int idade; 

printf("digite uma idade:" );
scanf("%d", &idade); 

if (idade >= 50 ){
    printf("voce e senior!")

}else if(idade >= 18){
  printf("voce e senior")

}else if(idade >= 18){
  printf("voce e maior de idade") 

}else if(idade >= 12){
  printf("voce e adolecente")

}else if(idade >= 9){
  printf("voce e pre adolecente") 

 


}return 0; }
