#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
int idade;
float altura; 

printf("bem-vindos ao brinquedo roleta da morte!");
printf("\nqual sua idade?");
scanf("%d", &idade); 
printf("\nqual sua altura?");
scanf("%f", &altura); 

if((idade >= 18) && (altura >= 1.60)){
  printf("voce pode brincar na roleta!");
}else{
  printf("voce nao pode brincar na roleta!");
}


 return 0;
}

