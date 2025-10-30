#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0, temp, digit;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    original = n;
    temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += (int)pow(digit, digits); 
        temp /= 10;
    }
    if (sum == original) {
        printf("%d la so Armstrong.\n", original);
    } else {
        printf("%d khong phai so Armstrong.\n", original);
    }

    return 0;
}
