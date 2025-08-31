#include <iostream>
using namespace std;

class Calculator
{    
    public:
    
	  double addition(double x, double y) 
	   {
         return x + y;
       }
       
       double subtraction(double x, double y) 
	   {
	   	 return x - y;
	   }
       
	   double multiplication(double x, double y) 
	   {
	     return x * y;
	   }
      double division(double x, double y) 
	   {
	   	 return x / y;
	   }
};

int main() {
    Calculator calc;
    double a, b;

    cout << "---- Simple Calculator ----" << endl;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    if (cin.fail()) 
	{
        cout << "Invalid input." << endl;
        return 1;
    }

    cout << "\n=> Results:" << endl;
    cout << "Addition          : " << calc.addition(a, b) << endl;
    cout << "Subtraction       : " << calc.subtraction(a, b) << endl;
    cout << "Multiplication    : " << calc.multiplication(a, b) << endl;

    if (b == 0) 
	{
        cout << "Division      : Error (division by zero!)" << endl;
    }
	else 
	{
        cout << "Division      : " << calc.division(a, b) << endl;
    }

    return 0;
}
