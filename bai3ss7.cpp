#include <stdio.h>
int main() {
    int n, original, reversed = 0, digit;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
} while (n <= 0); 
	  
	  original = n;

    while (n > 0) {
        digit = n % 10;  
        reversed = reversed * 10 + digit; 
        n = n / 10;   
    }
    if (original == reversed) {
        printf("%d la so doi xung (palindrome).\n", original);
    } else {
        printf("%d khong phai so doi xung.\n", original);
    }

    return 0;
}
