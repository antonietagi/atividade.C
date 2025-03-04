#include <stdio.h>

int main () {
/*Implemente um programa que calcule e imprima a soma dos elementos de cada 
coluna em uma matriz 3x3.*/

 int matriz[3][3];
 int i,j, linha;
 int soma=0;
 
 printf("Escolha os elementos da matriz [4][4]");
 for(i=0; i<3; i++){
  for(j=0; j<3; j++){
   printf("\nElemento [%d][%d]: ", i+1, j+1);
   scanf("%d", &matriz[i][j]);
  }
 }
  
  
   // Calculando a soma de cada linha
    for(i = 0; i < 3; i++) {  // Percorrer cada linha
        soma = 0;  // Resetar a soma para cada linha
        for(j = 0; j < 3; j++) {  // Percorrer as colunas da linha
            soma += matriz[i][j];  // Soma os elementos da linha
        }
        printf("Soma da linha %d: %d\n", i + 1, soma);  // está dentro do loop
    }



}
