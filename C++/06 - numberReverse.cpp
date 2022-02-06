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
    cout << original << " is the reversed form of " << reversed;
    return 0;
}