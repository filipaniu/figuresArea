#include <stdio.h>

double getTriangleArea(double a, double h) {
    return (a * h) / 2.0;
}

int main() {
    printf("%lf", getTriangleArea(5, 20));
    return 0;
}
