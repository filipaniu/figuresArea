#include <stdio.h>

double getTriangleArea(double a, double h) {
    return (a * h) / 2.0;
}

double getTrapezeArea(double a, double b, double h) {
    return (a + b) * h / 2.0;
}

int main() {
    //  printf("%lf\n", getTriangleArea(5, 20));
    printf("\n%lf", getTrapezeArea(3, 6, 2));
    return 0;
}
