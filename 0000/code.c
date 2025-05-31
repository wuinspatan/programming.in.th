#include <stdio.h>

int Sum(int c, int d);

int main() {
    int a, b;
    scanf("%d", &a);  // Input for a
    scanf("%d", &b);  // Input for b

    printf("%d", Sum(a, b));  // Call Sum function with a and b
    
    return 0;
}

int Sum(int c, int d) {
    return c + d;  // Return sum of c and d
}