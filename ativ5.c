#include <stdio.h>

int main () {
 
/*Crie um programa que verifique se um dado elemento (fornecido pelo usuário)
está presente em uma matriz 2x2.*/

 int matriz[2][2];
 int i,j;
 int verif;
 
  printf("Escolha os elementos da matriz [2][2]");
  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
    printf("\nElemento [%d][%d]: ", i+1, j+1);
    scanf("%d", &matriz[i][j]);
   }
  }
  
  printf("Vamos verificar se o número está na matriz?");
  printf("Digite um número:");
  scanf("%d", &verif);
  
  if (matriz[0][0] == verif || matriz[0][1] == verif || matriz[1][0] == verif || matriz[1][1] == verif) {
        printf("O número %d está na matriz.\n", verif);
    } else {
        printf("O número %d não está na matriz.\n", verif);
    }
}
