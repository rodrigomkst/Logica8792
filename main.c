#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>

void verificarEhparImpar(int n){
    if(n % 2 == 0){
        printf("%d e par!\n", n);
    }else{
        printf("%d e impar\n", n);
    }

        

    
}

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
 verificarEhparImpar(10);
 verificarEhparImpar(7);
 
   return 0;
}

