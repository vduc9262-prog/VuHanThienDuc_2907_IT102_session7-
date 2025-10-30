#include <stdio.h>

int main() {
    int n, x, count = 0, digit, original_n;

    // Bu?c 1: Nh?p s? nguyên duong n
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    // Bu?c 2: Nh?p ch? s? x (0-9)
    do {
        printf("Nhap chu so x (0-9): ");
        scanf("%d", &x);
        if (x < 0 || x > 9) {
            printf("Vui long nhap chu so tu 0 den 9!\n");
        }
    } while (x < 0 || x > 9);

    original_n = n;

    // Bu?c 3: Ð?m s? l?n xu?t hi?n c?a x
    while (n > 0) {
        digit = n % 10;        // L?y ch? s? cu?i
        if (digit == x) {
            count++;           // Tang b? d?m n?u b?ng x
        }
        n = n / 10;            // B? ch? s? cu?i
    }

    // Bu?c 4: In k?t qu?
    printf("Chu so %d xuat hien %d lan trong %d.\n", x, count, original_n);

    return 0;
    }
