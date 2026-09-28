#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int n;

printf("Digite algum numero");
scanf("%d", &n);

for(int i = 1; i <= 10; i++){
   for(int j = n; j <= 10; j++){
   printf("%d x %d = %d\n", j, i, j * i);

   }
   printf("\n");
}


 
   return 0;
}

