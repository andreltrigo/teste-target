#include <stdio.h>

int eh_fibonacci(int n) {
    int a, b, c;

    a = 0;
    b = 1;
    do {
        c = a + b;
        a = b;
        b = c;
    } while (c < n);

    return (n == c ? 1 : 0);
}

int main(void) {
    int n;
    int a, b, c;

    scanf("%d", &n);
    printf("O número %d %s a sequência fibonacci.\n", n, eh_fibonacci(n) ? "pertence" : "não pertence");

    return 0;
}
