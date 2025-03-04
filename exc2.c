#include <stdio.h>

int main(){
 
 /*Faça um programa que retorne o resultado do somatório abaixo, sendo n 
 o parâmetro de entrada.*/

  int soma=0, n,i;
  
    printf("Digite um número:");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++);
     soma += soma + (5+i*i+2*i+8);
     
     printf("O somatório é igual a: %d", soma);
}
