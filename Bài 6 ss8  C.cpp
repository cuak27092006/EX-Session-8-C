#include <stdio.h>

int main() {
    int n = 4; 
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0; 
    printf("Ma tr?n:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    // �u?ng ch�o ch�nh c� v? tr� [i][j] = nhau v� d? [0][0]
    printf("\nC�c ph?n t? tr�n du?ng ch�o ch�nh:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];    
    }
    printf("\n\nT?ng c�c ph?n t? tr�n du?ng ch�o ch�nh: %d\n", sum);

    return 0;
}
