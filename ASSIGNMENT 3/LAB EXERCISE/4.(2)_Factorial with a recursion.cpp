#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n * factorial(n-1);
}

int main()
{
	int a;
	cout << "Enter A Number : " << endl;
	cin >> a;
	 
	if(a<0)
	{
		cout << "\nPlease Enter A Positive Numbers." << endl;
	} 
	else
	{
		cout << "\nFactorial Of " << a << ": " << factorial(a) << endl;
	}
	
	return 0;
}
