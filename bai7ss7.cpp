#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2)
        return 0;
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("\nCac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    int i = a;
    while (i <= b) {
        if (laSoNguyenTo(i))
            printf("%d ", i);
        i++;
    }

    printf("\n");
    return 0;
}
