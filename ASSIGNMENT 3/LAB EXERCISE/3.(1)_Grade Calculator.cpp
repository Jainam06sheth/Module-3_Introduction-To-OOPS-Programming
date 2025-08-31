#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0 - 100):\n";
    cin >> marks;
    
    if (marks < 0 || marks > 100) 
	{
        cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
    }
    else {
        if (marks >= 90) {
            cout << "Grade: A+ " <<" OUTSTANDING" << endl;
        }
        else if (marks >= 80) {
            cout << "Grade: A " <<" EXCELLENT" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade: B " <<" GOOD" << endl;
        }
        else if (marks >= 60) {
            cout << "Grade: C " <<" SATISFACTORY" << endl;
        }
        else if (marks >= 50) {
            cout << "Grade: D " <<" PASS" << endl;
        }
        else {
            cout << "Grade: F " <<" FAIL" << endl;
        }
    }

    return 0;
}

