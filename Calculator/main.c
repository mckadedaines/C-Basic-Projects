#include <stdio.h>

int main () {
    int userSelection;
    float num1, num2, answer;

while (1)
{
    printf("\n%s\n", "Enter a choice:");
    printf("%s\n", "1. Addition");
    printf("%s\n", "2. Subtraction");
    printf("%s\n", "3. Multiplication");
    printf("%s\n", "4. Division");
    printf("%s\n", "5. Exit");

    scanf("\n%d", &userSelection);

    // Addition
    if (userSelection == 1) {
        printf("%s\n", "Please enter your first number: ");
        scanf("%f", &num1);

        printf("%s\n", "Please enter your second number: ");
        scanf("%f", &num2);

        answer = num1 + num2;
        printf("%f + %f = %.2f", num1, num2, answer);
    }

// Subtraction
    if (userSelection == 2) {
        printf("%s\n", "Please enter your first number: ");
        scanf("%f", &num1);

        printf("%s\n", "Please enter your second number: ");
        scanf("%f", &num2);

        answer = num1 - num2;
        printf("%f - %f = %.2f", num1, num2, answer);
    }

// Multiplication
     if (userSelection == 3) {
        printf("%s\n", "Please enter your first number: ");
        scanf("%f", &num1);

        printf("%s\n", "Please enter your second number: ");
        scanf("%f", &num2);

        answer = num1 * num2;
        printf("%f * %f = %.2f", num1, num2, answer);
    }

// Division
     if (userSelection == 4) {
        printf("%s\n", "Please enter your first number: ");
        scanf("%f", &num1);

        printf("%s\n", "Please enter your second number: ");
        scanf("%f", &num2);

        answer = num1 / num2;
        printf("%f / %f = %.2f", num1, num2, answer);
    }

// Exit
    if (userSelection == 5) {
        break;
    }
}

    return 0;
}