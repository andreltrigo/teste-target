#include <stdio.h>

int main(void) {
    int n;
    int a, b, c;

    scanf("%d", &n);

    a = 0;
    b = 1;
    do {
        c = a + b;
        a = b;
        b = c;
    } while (c < n);
    printf("O número %d %s a sequência fibonacci.\n", n, (n == c ? "pertence" : "não pertence"));

    return 0;
}
