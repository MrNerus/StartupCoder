#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 2;
    printf("Enter any number: ");
    scanf("%d", &n);
    int r = (n + 2) / 2;
    while (1) {
        if (i > r) { printf("%d is prime", n); break; }
        if (n % i == 0) { printf("%d is composite", n); break; }
        i++;
    }
    return 0;
}