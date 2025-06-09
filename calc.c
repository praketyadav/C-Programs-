#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter an operation (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to consume any leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
