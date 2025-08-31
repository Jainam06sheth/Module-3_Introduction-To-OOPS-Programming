#include <iostream>  
using namespace std;

int main() {
    double num1, num2, sum;
  
    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;
    sum = num1 + num2;
	
	cout << endl;
    cout << "~> " << num1 << " + " << num2 << " = " << sum << endl;
    return 0;  
}

