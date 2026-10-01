#include<stdio.h> 
#include<locale.h> 
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8"); 

int cubo[2][3][4] = {
{
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}
},
{
         {13, 14, 15, 16},
         {17, 18, 19, 20},
         {21, 22, 23, 24}
}

};
   for(int i = 0; i <= 1; i++){
      for(int j = 0; j <= 2; j++){
         for(int k = 0; k <= 3; k++){

            printf("%d", cubo[i][j][k]);
            printf("\n");
         }
         printf("\n");
      }
      printf("\n");
   }
  
   return 0;
}

