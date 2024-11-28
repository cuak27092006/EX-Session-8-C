#include <stdio.h>

int main() {
    int n;


    printf("Nh?p m?t s? nguyên (kích thu?c ma tr?n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Kích thu?c ma tr?n ph?i là s? nguyên duong!\n");
        return 0; 
    }

    
    int matran[n][n];

    printf("Ma tr?n vuông kh?i t?o là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matran[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
