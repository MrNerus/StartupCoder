#include <iostream>
using namespace std;

int intpow(int a, int b) {
    int i = 0, r = 1;
    while (i < b){
        r *= a;
        i++;
    }
    return r;
}

int main() {
    int original, buffer,reminder, sum = 0;
    cout << "Enter any number: ";
    cin >> original;
    buffer = original;
    while (buffer > 0) {
        reminder = buffer % 10;
        sum += intpow(reminder, 3);
        buffer /= 10;
    }
    if (original == sum) { cout << original << " is an Armstrong number"; }
    else { cout << original << " is not an Armstrong number"; }
    
    return 0;
    }