#include <iostream>
using namespace std ;

int Sum( int c, int d ) ;

int main () {
    int a, b ;

    cin >> a ;
    cin >> b ;
    cout << Sum(a, b) ;

    return 0 ;
}

int Sum(int c, int d ) {
    return c + d ;
} 