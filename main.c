#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n; 

printf("Digite um valor para tabuada");
scanf("%d", &n);

for(int i = 1; i<= 10; i++){
printf("%d x %d = %d\n", n, i, n * i);
}



   return 0;
}

