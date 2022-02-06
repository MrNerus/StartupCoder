#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if (a > b && a > c) { printf("%d is the largest number", a); }
    else if (b > a && b > c) { printf("%d is the largest number", b); }
    else if (c > a && c > b) { printf("%d is the largest number", c); }
    else { printf("At least two largest numbers are equal"); }
    return 0;
}