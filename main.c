#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

 int mes; 

 printf("digite um valor de 1 a 12\n");
 scanf("%d", &mes); 

 switch (mes) 
 {
  case 12:
  case 1:
  case 2:
    printf("verão\n");
  break;
  case 3:
  case 4:
  case 5:
    printf("outono\n");
    break;
  case 6: 
  case 7:
  case 8:
    printf("inverno\n");
    break;
  case 9: 
  case 10:
  case 11:
    printf("primavera\n");
    break;
 }

      
   return 0;
}

