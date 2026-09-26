#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int o;
float a, b;

do{
   printf("\n---MENU---\n");
   printf("1 - soma\n");
   printf("3 - multiplicação\n");
   printf("4 - divisão\n");
   printf("0 - sair\n");
   printf("Escolha uma opção");
   scanf("%d", &o);

   switch(o){
      
      case 1:
         printf("Digite dois numeros: ");
         scanf("%f %f", &a, &b);
         printf("Resultado: %.f\n", a + b);
         break;
      
      case 2:printf("Digite dois numeros: ");
             scanf("%f %f", &a, &b);
             printf("Resultado: %.f\n", a - b);
             break;
    
      case 3: 
         printf("Digite dois numeros: ");
         scanf("%f %f", &a, &b);
         printf("Resultado: %.2f\n", a * b);
         break;
     
      case 4:
         printf("Digite dois numeros: ");
         scanf("%f %f", &a, &b);
         if(b != 0)
            printf("Resultado: %.2f\n", a / b);
         else 
            printf("Erro: divisão por zero!\n");
         break;
      
      case 0:
         printf("Saindo...");
         break;
      
      default: 
         printf("opção invalida!\n");
         break;


            
   }
}while(o != 0);
   return 0;
}

