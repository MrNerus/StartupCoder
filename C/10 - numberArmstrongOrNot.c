#include <stdio.h>
#include <math.h>
int intpow(int a, int b){
    int i = 0, r = 1;
    while (i < b){
        r *= a;
        i++;
    }
    return r;
}
int main() {
    int original, buffer,reminder, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &original);
    buffer = original;
    while (buffer > 0) {
        reminder = buffer % 10;
        sum += intpow(reminder, 3);
        buffer /= 10;
    }
    if (original == sum) { printf("%d is an Armstrong number", original); }
    else { printf("%d is not an Armstrong number", original); }
    return 0;
}