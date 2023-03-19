#include <stdio.h>
#include <string.h>

void inverte_string(char *str);

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    inverte_string(str);
    printf("A string invertida é: %s", str);
    return 0;
}

void inverte_string(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
