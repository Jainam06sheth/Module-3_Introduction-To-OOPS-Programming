#include<iostream>
using namespace std;

double add(double j, double k);
double sub(double j, double k);
double mul(double j, double k);
double div(double j, double k);


int main()
{
	double j,k;
	char option;
	cout <<"==================SIMPLE CALCULATOR==================" << endl;
	
	cout << "Enter 1st Number:" << endl;
	cin >> j;
	cout << "Enter The Operators (+, -, *, /): " <<endl;
    cin >> option;

	cout << "Enter 2nd Number:" << endl;
	cin >> k;
	
	    cout << "\n=>Result: ";
    switch (option) {
        case '+': cout << add(j, k) << endl; 
		          break;
        case '-': cout << sub(j, k) << endl; 
		          break;
        case '*': cout << mul(j, k) << endl; 
		          break;
		
        case '/':
            	if (k == 0)
            	{
            		cout << "Error: Division by zero" << endl;
				}
            	else
            	{
            		cout << div(j, k) << endl;
				}
        		break;
        	
        default: cout << "Invalid operator." << endl;
    }

    cout << "\n=========================" << endl;
    return 0;
}

double add(double j,double k) 
{
	return j + k;
}

double sub(double j,double k) 
{
	return j - k;
}

double mul(double j,double k) 
{
	return j * k;
}

double div(double j,double k) 
{
	return j/k;
}
