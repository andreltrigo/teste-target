#include <stdio.h>

int eh_fibonacci(int n) {
    int a, b, c;

    a = c = 0;
    b = 1;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == n ? 1 : 0);
}

int main(void) {
    int n;
    int a, b, c;

    scanf("%d", &n);
    printf("O número %d %s a sequência fibonacci.\n", n, eh_fibonacci(n) ? "pertence" : "não pertence");

    return 0;
}
