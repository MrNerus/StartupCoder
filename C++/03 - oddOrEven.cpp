#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    if (number % 2 == 0) { cout << number << " is even number"; }
    else { cout << number << " is odd number"; }
    return 0;
}