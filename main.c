#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

void contarVogais(char palavra[]){
    int contador = 0;
    for(int i = 0; i <strlen(palavra); i++){
        char c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
        || c == 'A' || c == 'E' || c == 'I' || c == 'o' || c == 'U'){
            contador++;
        }//strlen clacula os caracteres de uma palavra.
    }
    printf("a palavra '%s' tem %d vogais. \n", palavra,contador);
}

        

    
int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  
  char palavra;
  printf("DIGITE ALGUMA PALAVRA!");
  scanf("%d", &palavra);
  
  contarVogais(&palavra);
 
   return 0;
}

