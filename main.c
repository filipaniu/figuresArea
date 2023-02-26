#include <stdio.h>

double getTriangleArea(double a, double h) {
    return (a * h) / 2.0;
}

double getTrapezeArea(double a, double b, double h) {
    return (a + b) * h / 2.0;
}

double getCubeVolume(double a) {
    return a * a * a;
}

double getCircleArea(double r) {
    long double pi = 22.0l / 7.0l;
    printf("%.25Lf", pi);
    return pi * r * r;
}

int main() {
    //  printf("%lf\n", getTriangleArea(5, 20));
    // printf("\n%lf", getTrapezeArea(3, 6, 2));
    // printf("%lf", getCubeVolume(3));
    printf("\n%.25lf", getCircleArea(12));
    return 0;
}
