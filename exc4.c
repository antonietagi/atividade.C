#include <stdio.h>

int main (){
 
 /*4. Escreva um programa que solicite ao usuário um número e imprima os números 
 pares de 2 até o número inserido pelo usuário usando um loop "for".*/
 
 int num, i,a;
 
 printf("Digite um número:");
 scanf("%d", &num);
 
 printf("Os números de 2 ao %d são:\n", num);
 
 for(i=2; i<=num; i++) {
  if(i%2==0){
   printf("%d ", i);
  }
 }
}
