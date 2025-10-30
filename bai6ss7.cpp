#include <stdio.h>
int main() {
    int n, reversed = 0, original;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    original = n;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    printf("So dao nguoc cua %d la: %d\n", original, reversed);

    return 0;
}
