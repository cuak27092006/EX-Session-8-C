#include <stdio.h>

int main() {
    int n;


    printf("Nh?p m?t s? nguy�n (k�ch thu?c ma tr?n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("K�ch thu?c ma tr?n ph?i l� s? nguy�n duong!\n");
        return 0; 
    }

    
    int matran[n][n];

    printf("Ma tr?n vu�ng kh?i t?o l�:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matran[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
