#include <stdio.h>

// Function to reverse a number
long long reverseNumber(long long n) {
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
// Uses a slightly more efficient method by checking only half the number
int isPalindrome(long long n) {
    // Negative numbers can't be palindromes in this context
    if (n < 0) {
        return 0;
    }

    long long original = n;
    long long reversed_half = 0;

    // Build the reversed half of the number
    while (n > reversed_half) {
        reversed_half = reversed_half * 10 + n % 10;
        n /= 10;
    }

    // A number is a palindrome if it's equal to its reversed half,
    // or if it's equal to its reversed half with the middle digit removed
    // (for odd-digit numbers).
    return (n == reversed_half) || (n == reversed_half / 10);
}

int main() {
    long long number;
    printf("🌟 Palindrome Checker 🌟\n");
    printf("Enter a number: ");
    scanf("%lld", &number);

    if (isPalindrome(number)) {
        printf("🎉 %lld is a palindrome! 🎉\n", number);
    } else {
        printf("❌ %lld is not a palindrome. ❌\n", number);
    }

    return 0;
}
