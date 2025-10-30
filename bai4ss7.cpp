#include <stdio.h>
int main (){
    int m, n, i, j;

    do {
        printf("Nhap so dong m : ");
        scanf("%d", &m);
        if (m <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (m <= 0);

    do {
        printf("Nhap so cot n : ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    printf("\nHinh chu nhat %dx%d:\n\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");  // Xu?ng dòng sau m?i hàng
    }

    return 0;
}
