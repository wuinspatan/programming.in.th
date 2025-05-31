#include <stdio.h>

void get_matrix(int m, int n, int matrix[m][n]);
void show_matrix(int m, int n, int matrix[m][n]);
void add_matrix(int m, int n, int matrix_one[m][n], int matrix_two[m][n], int result[m][n]);

int main() {
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int matrix_one[m][n];
    int matrix_two[m][n];
    int sum_matrix[m][n];

    get_matrix(m, n, matrix_one);
    get_matrix(m, n, matrix_two);

    add_matrix(m, n, matrix_one, matrix_two, sum_matrix);
    
    // printf("Matrix one :\n");
    // show_matrix(m, n, matrix_one);
    // printf("Matrix two :\n");
    // show_matrix(m, n, matrix_two);
    // printf("Sum matrix :\n");
    show_matrix(m, n, sum_matrix);

    return 0;
}

void get_matrix(int m, int n, int matrix[m][n]) {
    for (int i = 0 ; i < m ; i++) {
        for (int j = 0 ; j < n ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void show_matrix(int m, int n, int matrix[m][n]) {
    for (int i = 0 ; i < m ; i++) {
        for (int j = 0 ; j < n ; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrix(int m, int n, int matrix_one[m][n], int matrix_two[m][n], int result[m][n]) {
    int sum_matrix[m][n] ;
    for (int i = 0 ; i < m ; i++) {
        for (int j = 0 ; j < n ; j++) {
            result[i][j] = matrix_one[i][j] + matrix_two[i][j] ;
        }
    }
}
