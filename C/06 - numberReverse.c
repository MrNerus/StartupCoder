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
    printf("%d is the reversed form of %d",reversed , original);
    return 0;
}