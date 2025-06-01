#include <stdio.h>
#include <math.h>

int main() {
    double pi = M_PI;  
    double range;

    scanf("%lf", &range);  

    double area = pi * (range * range); 
    double Taxicab_geomet = 2 * (range * range); 

    printf("%.6f\n", area);
    printf("%.6f\n", Taxicab_geomet);

    return 0;
}