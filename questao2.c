#include <stdio.h>

int main() {
    int termo1 = 0, termo2 = 1, termo3 = 0, valor;

    printf("------------------------------------------\n");
    printf("   Consulta da Sequência de Fibonacci\n");
    printf("------------------------------------------\n");
    printf("Digite um número: ");
    scanf("%d", &valor);

    while (valor > termo3) {
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
    }

    if (valor == 0 || valor == 1 || valor == termo3) {
        printf("O número faz parte da sequência de Fibonacci.\n");
    } else {
        printf("O número digitado não faz parte da sequência de Fibonacci.\n");
    }

    return 0;
}
