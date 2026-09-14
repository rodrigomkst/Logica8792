#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int a, b, c, maior; 

printf("digite tres numeros: "); 
scanf("%d %d %D", &a, &b, &c); 

maior = a; 

if(b > maior) maior = b; 
if(c > maior) maior =c; 

printf("maior: %d", maior); 

 



   return 0;
}

