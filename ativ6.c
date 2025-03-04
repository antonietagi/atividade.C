#include <stdio.h>

int main () {
/*Desenvolva um programa que conte o número de zeros em uma matriz 3x3.*/

 int matriz[3][3];
 int i, j, contador;
 
  printf("Escolha os elementos da matriz [3][3]");
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){
    printf("\nElemento [%d][%d]: ", i+1, j+1);
    scanf("%d", &matriz[i][j]);
   }
 }
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){
    if(matriz[i][j]==0){/*Se não houver nenhum zero na matriz, o contador
    continuará com o valor inicial (que é 0) e o programa mostrará que não 
    há zeros na matriz.*/
     contador++;
    }
   }
  }
  printf("A matriz tem %d zeros", contador);
}
