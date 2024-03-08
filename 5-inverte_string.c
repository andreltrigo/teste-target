#include <stdio.h>
#include <string.h>

#define STR_MAX 512 + 1

int main(void) {
    char string[STR_MAX];
    int tamanho;
    int j;

    fgets(string, STR_MAX, stdin);
    string[strcspn(string, "\n")] = '\0';

    tamanho = strlen(string);
    char inverso[tamanho + 1];
    j = 0;
    for (int i = tamanho - 1; i >= 0; i--)
        inverso[j++] = string[i];
    inverso[j] = '\0';
    printf("%s\n", inverso);

    return 0;
}
