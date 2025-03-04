#include <stdio.h>

int main (){
 /*6.Escreva um programa que calcule a média de 10 números fornecidos
 pelo usuário usando um loop "for".*/
 int i;
 float n, media=0, soma=0;
 
 for(i=1; i<=10; i++){
  printf("Digite as suas 10 notas");
  scanf("%f", &n);
  soma+=i;
 }
 
 media = soma/10;
 printf("A média é %.2f", media);

}
