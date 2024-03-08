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

    if (eh_fibonacci(n))
        printf("O número %d pertence a sequência fibonacci.\n", n);
    else
        printf("O número %d não pertence a sequência fibonacci.\n", n);

    return 0;
}
