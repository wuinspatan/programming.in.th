/*
    Ball first poss : Left

    stat 'A' : post 1 <-> 2
    stat 'B' : post 2 <-> 3 
    stat 'C' : post 3 <-> 1 

    Return possition of Ball 
        Letf : 1, Mid : 2, Right : 3
*/ 

#include <stdio.h>

int main() {

    // Ball possition = 1
    char stat[50] ;
    int A[3] = {0, 1, 0} ;
    int B[3] = {1, 0, 0} ;
    int C[3] = {0, 0, 1} ;

    scanf("%s", stat) ;
    int index = sizeof(stat) / sizeof(stat[0]) ;

    int Ball[3] = {1, 0, 0} ;

    for (int i = 0 ; i < index ; i++) {
        
        // soon 

    } 


    return 0 ;
}