#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter number of top n numbers to add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        sum += i;
    }
    printf("The sum is %d", sum);
    return 0;
}