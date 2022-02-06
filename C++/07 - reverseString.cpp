#include <iostream>
using namespace std;

int main() {
    string a = "", b = "";
    int i = 0, ri = 0;
    cout << "Enter a string: ";
    cin >> a;
    while (i < a.length()){
        ri = a.length() - 1 - i;
        b += a[ri];
        i++;
    }
    cout << "reversed string is: " << b;
    return 0;
}