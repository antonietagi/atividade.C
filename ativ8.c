#include <stdio.h>

int main () {
/*8. Faça um programa que multiplique todos os elementos de uma matriz 2x2 
por um número escalar fornecido pelo usuário.*/

  int matriz[2][2];
  int i, j; 
  int num;
   
    printf("Escolha os elementos da matriz [2][2]");
    for(i=0; i<2; i++){
     for(j=0; j<2; j++){
      printf("\nElemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
     }
   }
   
   printf("Agora, escolha um número para múltiplicar cada número da matriz:");
   scanf("%d", &num);
   
   for(i=0; i<2; i++){
    for(j=0; j<2; j++){
     int mult= num * matriz[i][j];
     printf("Elemento [%d][%d] multiplicado: %d\n", i+1, j+1, mult); 
    }
   }

}
