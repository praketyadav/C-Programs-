#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    if (original == reversed) {
        printf("✅ It's a palindrome!\n");
    } else {
        printf("❌ Not a palindrome.\n");
    }

    return 0;
}
