#include <stdio.h>

int main (){
 /*Faça um programa para imprimir todos os números
 entre 1 e 100, exceto aqueles divisíveis por 9.*/
 
 int i;
 for(i=1; i<=100; i++) {
  if(i%9!=0)
  printf("%d ", i);
 }
 
}
