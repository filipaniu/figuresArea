#include <stdio.h>

long double PI = 22.0l / 7.0l;

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
    printf("%.25Lf", PI);
    return PI * r * r;
}

double getCylinderVolume(double r, double h) {
    return getCircleArea(r) * h;
}

double getConeVolume(double r, double h) {
    return PI / 3.0l * (r * r) * h;
}

int main() {
    //  printf("%lf\n", getTriangleArea(5, 20));
    // printf("\n%lf", getTrapezeArea(3, 6, 2));
    // printf("%lf", getCubeVolume(3));
    // printf("\n%.25lf", getCircleArea(12));
    // printf("\n%lf", getCylinderVolume(4, 5));
    printf("%lf", getConeVolume(4.0l, 36.0l));
    return 0;
}
