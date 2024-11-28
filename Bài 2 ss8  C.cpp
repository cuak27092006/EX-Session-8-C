#include <stdio.h>

int main() {
    int Mang[5] = {1, 6, 8, 2, 5};
    int n;
    
    printf ("M?i b?n nh?p ph?n t? c?n tìm là :");
    scanf ("%d", &n);
    
    if (n == 1){
   	printf ("ph?n t? c?n tìm là %d :", &Mang[1]);
   	}else {
    printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }
   	if (n == 2){
   	printf ("ph?n t? c?n tìm là %d :", &Mang[2]);
   	}else {
    printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }
   	if (3 == n){
   	printf ("ph?n t? c?n tìm là %d :", &Mang[3]);
   	}else {
    printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }
   	if (4 == n){
   	printf ("ph?n t? c?n tìm là %d :", &Mang[4]);
   	}else {
    printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }
   	if (5 == n){
   	printf ("ph?n t? c?n tìm là %d :", &Mang[5]);
   	}else {
    printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }
   	


    return 0;
}

