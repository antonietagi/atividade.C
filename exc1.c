#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, proximoTermo;

    // Leitura do valor de n
    printf("Digite o termo desejado da série de Fibonacci: ");
    scanf("%d", &n);

    // Verifica se o número é válido para a sequência Fibonacci
    if (n == 0) {
        printf("O termo 0 da sequência é: 0\n");
    } else if (n == 1) {
        printf("O termo 1 da sequência é: 1\n");
    } else {
        // Laço for para calcular o n-ésimo termo
        for (i = 2; i <= n; i++) {
            proximoTermo = t1 + t2;  // A soma dos dois anteriores
            t1 = t2;  // Atualiza t1 para o próximo valor
            t2 = proximoTermo;  // Atualiza t2 para o próximo valor
        }
        printf("O termo %d da sequência de Fibonacci é: %d\n", n, proximoTermo);
    }

    return 0;
}
