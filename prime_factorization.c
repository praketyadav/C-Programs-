#include <stdio.h>

void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2)
        printf("%d", n);

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("No prime factors.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}
