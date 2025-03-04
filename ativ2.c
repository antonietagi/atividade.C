#include <stdio.h>

int main () {
 
 /*2. Faça um programa onde o usuário deve informar o tamanho de um vetor e 
 seus elementos. Encontre o maior e o menor valor, imprimindo ambos.*/
 
 int i, tamanho;
 int menor, maior;
 
 printf("Digite o tamanho do vetor:");
 scanf("%d", &tamanho);
 
 int v[tamanho];
 
 for(i=0; i<tamanho; i++){
  printf("Elemento %d: ", i);
  scanf("%d", &v[i]);
 
 }
 
  maior = menor = v[0];
  for(i=0; i< tamanho; i++){
   if (v[i]>maior){
   maior = v[i];
  }
  
  if(v[i]<menor){
   menor = v[i];
   
  }
 }
 
 printf("O maior número é o %d: ", maior);
 printf("\nO menor número é o %d: ", menor);
}
