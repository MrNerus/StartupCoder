#include <iostream>
using namespace std;

int main() {
    int original, reversed = 0, n, reminder;
    cout << "Enter any number: ";
    cin >> original;
    n = original;
    while (n > 0) {
        reminder = n % 10;
        reversed = (reversed * 10) + reminder;
        n = n / 10;
    }
    if (original == reversed) { cout << original << " is a palindrome number"; }
    else { cout << original << " is not a palindrome number"; }
    return 0;
}