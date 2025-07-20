#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Using Euclidean Algorithm
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("GCD is: %d\n", a);

    return 0;
}
