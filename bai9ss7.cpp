#include <stdio.h>
#include <math.h>

int main() {
    int n, a, b;
    int found = 0; 

    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    printf("\nCac cap (a, b) sao cho a^3 + b^3 = %d:\n", n);

    int max_a = (int)cbrt(n) + 1; 

    for (a = 0; a <= max_a; a++) {
        long long cube_a = (long long)a * a * a;  // a^3
        if (cube_a > n) break;

        long long cube_b_needed = n - cube_a;
        int b_candidate = (int)(cbrt(cube_b_needed) + 0.5);

        long long cube_b = (long long)b_candidate * b_candidate * b_candidate;

        if (cube_b == cube_b_needed && b_candidate >= 0) {
            printf("(%d, %d)\n", a, b_candidate);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co cap (a, b) nao thoa man.\n");
    }

    return 0;
}
