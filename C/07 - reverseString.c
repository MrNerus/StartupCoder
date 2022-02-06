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
    printf("reversed string is: %s", b);
    return 0;
}