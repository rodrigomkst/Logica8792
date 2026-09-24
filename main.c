#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int i = 5; 

while(i <= 6){
   printf("%d\n", i);
   i++; 
}



   return 0;
}

