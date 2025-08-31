#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Positive Integer: " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Please enter only positive integers." << endl;
        return 1;
    }

    cout << "\nMultiplication Table for " << n << ":" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    cout << "----------------------------------------" << endl;
    return 0;
}

