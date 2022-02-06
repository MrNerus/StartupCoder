#include <stdio.h>

int main() {
    int original, reversed = 0, n, reminder;
    printf("Enter any number: ");
    scanf("%d", &original);
    n = original;
    while (n > 0) {
        reminder = n % 10;
        reversed = (reversed * 10) + reminder;
        n = n / 10;
    }
    if (original == reversed) { printf("%d is a palindrome number", original); }
    else { printf("%d is not a palindrome number", original); }
    return 0;
}