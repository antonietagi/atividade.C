#include <stdio.h>

int main (){
 /*Faça um programa que leia um inteiro n e calcule e imprima o Fatorial de n.
 n! = n *(n-1) * (n-2) * ... 2 * 1 */
 
 int i, n, mult=1;
 //mult começa com 1 para não dar erro na multiplicação
 
 printf("Digite um número para calcular o fatorial:");
 scanf("%d", &n);
 
 for(i=n; i>=1; i--){
  mult *= i;
 }
 
 printf("%d", mult);
 
 
}
