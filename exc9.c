#include <stdio.h>

int main(){
 
    /* 9. Escolha um dos programas acima e comente com suas palavras 
       cada parte do programa. */
 
    int i, n, mult = 1;
    
    /* Inicializamos a variável 'mult' com 1 porque em multiplicação, o valor 
       inicial de 1 não altera o resultado, e ela vai acumular o produto dos números. */
 
    printf("Digite um número para calcular o fatorial:"); /* Solicita que o usuário 
                                                          digite um número para calcular o fatorial */
    scanf("%d", &n); /* A função scanf captura a entrada do usuário e armazena o valor em 'n' */
 
    for(i = n; i >= 1; i--) { /* O laço começa em 'n' e decrementa até 1, pois o fatorial 
                               é o produto de n * (n-1) * (n-2) * ... * 1 */
        mult *= i; /* A cada iteração, o valor de 'i' é multiplicado ao valor acumulado em 'mult' */
    }
 
    printf("O fatorial de %d é: %d\n", n, mult); /* Imprime o fatorial calculado, mostrando também o número 
                                                que foi calculado */
    
    return 0;
}
