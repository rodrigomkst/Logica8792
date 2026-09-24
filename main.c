#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int opcao = -1;

while(opcao != 0){
   printf("\nMenu: \n");
   printf("1 - Depositar\n");
   printf("2 - sacar\n");
   printf("3 - consultar\n");
   printf("0 - sair\n");
   printf("Escolha: ");
   scanf("%d", &opcao); 

   switch(opcao){
      case 1: printf("Voce escolheu depositar\n"); break;
      case 2: printf("Voce escolheu sacar\n"); break;
      case 3: printf("Voce escolheu consultar\n"); break;
      case 0: printf("Saindo..."); break;
      default: printf("Opção invalida!\n");
   }
}
   return 0;
}

