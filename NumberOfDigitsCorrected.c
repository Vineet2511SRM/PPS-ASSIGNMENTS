#include <stdio.h>

int countDigits(int n) {
    // Handle the case for zero explicitly
    if (n == 0) return 1;

    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d\n", countDigits(num));
    return 0;
}
