#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

char* retornarNome(char nome[]) {
   return nome;
}

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

printf("O nome é: %s\n", retornarNome("rodrigo")); 

   return 0; 
}
