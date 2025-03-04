#include <stdio.h>

int main(){
 /*1. Crie um programa que pergunte ao usuário o tamanho de um vetor,
 leia seus elementos e, em seguida, imprima o vetor completo.
 Calcule a soma desses elementos e imprima o resultado.*/
 int tamanho;
 int i, soma =0;
 
 printf("Digite o tamanho do vetor:");
 scanf("%d", &tamanho);
 
 int v[tamanho];
 
 printf("Digite os elementos do vetor\n");
 for(i=0; i<tamanho; i++){
  printf("Elemento %d:", i );
  scanf("%d", &v[i]);
  
  soma += v[i];
 }
  
  printf("Vetor completo: ");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }

 
    printf("\nA soma é %d", soma);
}
