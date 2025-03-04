#include <stdio.h>

int main () {
 
 /*Implemente um programa que imprima os elementos da diagonal principal 
 de uma matriz 3x3.*/
 
 int matriz [3][3];
 int i,j, a;
 
 for(i=0; i<3; i++){
  for(j=0; j<3; j++){
   printf("Elemento [%d][%d]: ", i+1, j+1); //para que a matriz comece com 1
   scanf("%d", &matriz[i][j]);
  }
 }
 //diagonais tem números iguais, i = j
 //[0][0] [1][1] [2][2]
 
   printf("Os números da diagonal são:");
   for(i = 0; i<3; i++){
    printf("%d ", matriz[i][i]); //ou [j][j], já que i = j  
    
   }
}
