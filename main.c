#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

char* saudacao(){
   return "OLÁ, seja bem vindo(a)!";
}

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

printf("%s\n", saudacao()); 

   return 0; 
}
