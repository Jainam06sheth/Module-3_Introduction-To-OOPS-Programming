#include <iostream>
using namespace std;

int main() 
{
    //Implicit Type Conversion:-
    cout << "=== Implicit Type Conversion ===" << endl;

    int a = 15;
    double d = a;  //int automatically converted to double.

    cout << "Original int value: " << a << endl;
    cout << "Implicitly converted to double: " << d << endl;

    float f = 7.89f;
    int Int = f;

    cout << "Original float value: " <<f <<endl;
    cout << "Implicitly converted to int (truncated): " <<Int <<endl;

    //Explicit Type Conversion:-
    cout << "\n=== Explicit Type Conversion ===" <<endl;

    double pi = 3.14159;
    int PI= (int) pi;  
    cout << "Original double value (pi): " <<pi <<endl;
    cout << "Explicitly cast to int: " <<PI <<endl;

    //Use different variable names to avoid redeclaration:-
    int x = 10;
    int y = 3;
    double result = static_cast<double> (x)/y;  

    cout << "Integer division without casting (x / y): " <<x / y <<endl;
    cout << "Explicit casting using static_cast: " <<result << endl;

    return 0;
}

