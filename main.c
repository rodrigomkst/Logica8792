#include<stdio.h> 
#include<locale.h> 
#include<stdbool.h>
#include<windows.h>

int main(){   


 
 printf ("Digite a temperatura em celsius: "); 
 scanf("%f", &celsius); 

 fahrenheit = (celsius * 9.0 / 5.0) + 32; 
 printf ("Fahrenheit: %.2f\n", fahrenheit); 

   return 0; 
}