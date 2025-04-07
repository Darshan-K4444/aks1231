#include <stdio.h>

// Function declarations
void add(int, int);
void subtract(int, int);
void multiply(int, int);
void divide(int, int);

int main() {
    int num1, num2, choice;

    // Ask the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display operation choices
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Using if-else to check if input is valid
    if (num1 == 0 && choice == 4) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        // Using switch to perform the chosen operation
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
                break;
        }
    }

    return 0;
}

// Function definitions

void add(int a, int b) {
    printf("Result: %d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("Result: %d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("Result: %d * %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

