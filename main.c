#include<stdio.h> 
#include<locale.h>
#include<stdbool.h>
#include<windows.h>
bool ehPar(int numero){ 
    return(numero % 2 == 0);
}


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
 int n; 
 
 printf("digite um número"); 
 scanf("%d", &n); 

 printf ("Antecessor: %d\n",n - 1);
 printf ("sucessor: %d\n",n + 1);
 
   return 0; 
}