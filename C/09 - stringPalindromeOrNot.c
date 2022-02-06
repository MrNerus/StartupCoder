#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    char a[20] = "", b[20] = "";
    int i = 0, ri = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    while (i < strlen(a)){
        ri = strlen(a) - 1 - i;
        b[i] = a[ri];
        i++;
    }
    if (strcmp(a, b) == 0){ printf("%s is a palindrome string", a); }
    else { printf("%s is not a palindrome string", a); }
    return 0;
}