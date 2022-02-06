#include <iostream>
using namespace std;

int main() {
    int previous = 0, current = 1, next = previous + current, i = 3, n;
    cout << "Enter numer of fibonachi terms: ";
    cin >> n;
    cout << previous << endl << current << endl;
    while (i <= n){
        cout << next << endl;
        previous = current;
        current = next;
        next = previous + current;
        i++;
    }
    return 0;
}