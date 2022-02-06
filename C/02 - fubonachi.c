#include <stdio.h>

int main() {
    int previous = 0, current = 1, next = previous + current, i = 3, n;
    printf("Enter numer of fibonachi terms: ");
    scanf("%d", &n);
    printf("%d\n%d\n", previous, current);
    while (i <= n){
        printf("%d\n", next);
        previous = current;
        current = next;
        next = previous + current;
        i++;
    }
    return 0;
}