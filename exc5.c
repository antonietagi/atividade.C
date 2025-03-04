#include <stdio.h>

int main (){
 
 /*5.Crie um programa que calcule a soma dos números pares de 1 a 100 
 usando um loop "for"*/
 
 int i, soma=0;
 
 for(i=1; i<=100; i++) {
  if (i%2==0){
   soma+=i;
  }
 }
 
 
 printf("A soma dos números pares é %d", soma);
}
