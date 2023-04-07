#include <stdio.h>
#define PI 3.14159

double calculateArea(double radius) {
    double area = PI * radius * radius;
    return area;
}

double calculatePerimeter(double radius) {
    double perimeter = 2 * PI * radius;
    return perimeter;
}

int main() {
    double radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = calculateArea(radius);
    perimeter = calculatePerimeter(radius);

    printf("Area of the circle = %lf\n", area);
    printf("Perimeter of the circle = %lf\n", perimeter);

    return 0;
}

