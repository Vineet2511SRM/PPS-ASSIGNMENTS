#include <stdio.h>
// Bug when user enters a negative number...
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverseNumber(num));
    return 0;
}
/*
Correct test case
Input: 3245
Output: 4523(Expected)

Refute test case
Input: -4567
Expected output: -7654
Actual output: 0(Unexpected)
*/