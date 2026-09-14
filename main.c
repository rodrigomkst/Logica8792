#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int n; 

printf("ditgite um numero:"); 
scanf("%d", &n); 

//if(...){
  //    code.. 
//}

printf("%s",n > 0 ? "positivo" : (n < 0 ? "negativo" : "zero")); 

   return 0; 
}