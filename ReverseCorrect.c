#include <stdio.h>

int reverseNumber(int n) {
    int reversed = 0;
    int num_sign = (n < 0) ? -1 : 1; // Storing the sign of the number
    n = (n < 0) ? -n : n; // Making n positive

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed * num_sign; // Restore the sign
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverseNumber(num));
    return 0;
}
