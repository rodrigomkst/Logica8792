#include<stdio.h> 
#include<locale.h> 
#include<windows.h>

int main(){ 

setlocale(LC_ALL, "pt_BR.UTF-8"); 
  

  float a, b, c;

  printf("digite os tres lados do triangulo:");
  scanf("%f %f %f", &a, &b, &c); 

  if(a == b && b == c){
    printf("Equilatero!\n");
  }else if(a == b || a == c){
    printf("isosceles!\n");
  }else{
    printf("escaleno!\n");
  }

    
      

 
 return 0;
}

