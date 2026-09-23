#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<string.h>
#include<math.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
  char none[50];
  
  printf("Digite seu nome completo aqui ");
  fgets(none, sizeof(none), stdin);

printf("ola %s", none);

   return 0;
}

