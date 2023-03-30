//ilybeshari22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double addition(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double division(double x, double y) {
    if (y == 0) {
        printf("Error: division by zero\n");
        return 0;
    }
    return x / y;
}

double square_root(double x) {
    if (x < 0) {
        printf("Error: square root of negative number\n");
        return 0;
    }
    return sqrt(x);
}

double power(double x, int m) {
    return pow(x, m);
}

int main() {
    double x, y, result;
    int m, choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("Enter the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = addition(x, y);
            printf("%.2lf + %.2lf = %.2lf", x, y, result);
            break;
        case 2:
            result = subtraction(x, y);
            printf("%.2lf - %.2lf = %.2lf", x, y, result);
            break;
        case 3:
            result = multiplication(x, y);
            printf("%.2lf * %.2lf = %.2lf", x, y, result);
            break;
        case 4:
            result = division(x, y);
            printf("%.2lf / %.2lf = %.2lf", x, y, result);
            break;
        case 5:
            result = square_root(x);
            printf("sqrt(%.2lf) = %.2lf", x, result);
            break;
        case 6:
            printf("Enter the power: ");
            scanf("%d", &m);
            result = power(x, m);
            printf("%.2lf^%d = %.2lf", x, m, result);
            break;
        default:
            printf("Error: invalid operation\n");
            break;
    }

    return 0;
}

