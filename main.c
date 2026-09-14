#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int n; 

printf("ditgite um numero:"); 
scanf("%d", &n); 

printf ("%s", n % 2 == 0 ? "\npar" : "\nimpar");


   return 0; 
}