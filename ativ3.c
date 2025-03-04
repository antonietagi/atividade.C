#include <stdio.h>

int main () {
 /*Escreva um programa que calcule a soma dos elementos de uma linha específica 
 (escolhida pelo usuário) em uma matriz 4x4.*/
 
 int matriz[4][4];
 int i,j, linha;
 int soma=0;
 
 printf("Escolha os elementos da matriz [4][4]");
 for(i=0; i<4; i++){
  for(j=0; j<4; j++){
   printf("\nElemento [%d][%d]: ", i, j);
   scanf("%d", &matriz[i][j]);
  }
 }
  
  printf("Digite a linha que deseja fazer a soma (1 a 4)");
  scanf("%d", &linha);
  
  linha--;  // Subtrai 1 para ajustar o índice (de 1 a 4 para 0 a 3)
  
  for(j=0; j<4; j++){
    soma += matriz[linha][j];
  }
  printf("A soma é: %d", soma);
 
  
 
}
