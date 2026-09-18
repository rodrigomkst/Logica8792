#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

 int mes; 

 printf("digite um mes de 1 a 12");
 printf("1 - janeiro\n");
 printf("2 - fevereiro\n"); 
 printf("3 - março\n");
 printf("4 - abril\n"); 
 printf("5 - maio");
 printf("6 - junho\n");
 printf("7 - julho\n");
 printf("8 - agosto\n");
 printf("9  - setembro\n");
 printf("10 - outubro\n");
 printf("11 - novembro\n");
 printf("12 - dezembro\n"); 
  scanf("%d", &mes); 

  switch (mes) 
  {
    case 1:
      printf("janeiro | verão");
      break;
    case 2:
      printf("fevereiro | verão");
      break;
    case 3: 
      printf("março | verão");
      break;
    case 4:
      printf("abril | outono");
      break;
    case 5:
      printf("maio | outono");
      break;
    case 6:
      printf("junho | outono");
      break;
    case 7: 
      printf("julho | outono");
      break;
    case 8:
      printf("agosto | inverno");
      break;
    case 9:
      printf("setembro | inverno"); 
      break; 
    case 10: 
      printf("outubro | inverno");
      break;
    case 11: 
      printf("novembro | primavera");
      break;
    case 12:
      printf("dezembro | primavera");
      break;
      
  }


      
   return 0;
}

