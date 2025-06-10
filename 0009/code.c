#include <stdio.h>

void sortNL(int numL[3], int index) ;
void match_number(char letterL[3], int index, int numLi[3]) ;

int main() {

    int num[3] ;
    char gletter[3] ;

    scanf("%d %d %d", &num[0], &num[1], &num[2]) ;
    scanf(" %c %c %c", &gletter[0], &gletter[1], &gletter[2]) ;

    sortNL(num, 3) ;
    match_number(gletter, 3, num) ;

    return 0 ;
}

void sortNL(int numL[3], int index) {
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = i + 1 ; j < 3 ; j++) {
            if (numL[j] < numL[i]) {
                int temp = numL[i] ;
                numL[i] = numL[j] ;
                numL[j] = temp ;
            }
        }
        // printf("%d ", numL[i]) ;
    }
}

void match_number(char letterL[3], int index, int numLi[3]) {
    for (int i = 0 ; i < 3 ; i++) {
        if (letterL[i] == 'A') {
            printf("%d ", numLi[0]) ;
        } else if (letterL[i] == 'B') {
            printf("%d ", numLi[1]) ;
        } else {
            printf("%d ", numLi[2]) ;
        }
    }
}