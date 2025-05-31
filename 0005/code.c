#include <stdio.h>

double pythagorus(double a, double b);

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = pythagorus(a, b);
    printf("%.6f", c) ;

    return 0;
}

double pythagorus(double a, double b) {
    double ca = a > b ? a : b;
    double x = a * a + b * b;
    double epsilon = 0.000001;

    while ((ca * ca - x) > epsilon || (x - ca * ca) > epsilon) {
        ca = (ca + x / ca) / 2.0;
    }
    
    return ca;
}