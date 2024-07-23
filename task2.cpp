#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (x < 10)
        cout << "Number is too small!" << endl;
    
    if (x > 10)
        cout << "Number is greater than 10" << endl;

    return 0;
}