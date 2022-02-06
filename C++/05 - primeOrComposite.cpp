#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, i = 2;
    cout << "Enter any number: ";
    cin >> n;
    int r = sqrt(n);
    while (i) {
        if (i > r) { cout << n << " is prime"; break; }
        if (n % i == 0) { cout << n << " is composite"; break; }
        i++;
    }
    return 0;
}