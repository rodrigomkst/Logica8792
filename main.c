#include<stdio.h> 
#include<locale.h> 
#include<windows.h>


int main(){   

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int n; 

printf("ditgite um numero:"); 
scanf("%d", &n); 

if(n % 2 == 0){
    printf("\npar"); 
}else{
     printf("\nimpar");
}




   return 0; 
}