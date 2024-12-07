#include <stdio.h>

int countDigits(int n) {
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
/*
Correct test case
Input: 18657
Output: Number of digits: 5(Expected)

Refute test case
Input: 0
Expected Output: 1
Actual Output: 0(Unexpected)
*/