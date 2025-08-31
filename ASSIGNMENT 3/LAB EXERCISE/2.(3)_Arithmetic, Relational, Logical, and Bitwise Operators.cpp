#include<iostream>
using namespace std;

int main()
{
	cout <<"---------------------------------------------------------" <<endl;
	cout <<"Arithmetic, Relational, Logical, and Bitwise Operators:-" <<endl;
	cout <<"---------------------------------------------------------" <<endl;

	int a = 10, b = 20;

	cout <<"Arithmetic Operator: " <<endl;
	cout <<endl;
	cout <<"a + b =  " <<a + b <<endl;
	cout <<"a - b =  " <<a - b <<endl;
	cout <<"a * b =  " <<a * b <<endl;
	cout <<"a / b =  " <<a / b <<endl;
	cout <<"a % b =  " <<a % b <<endl;

	cout <<"--------------------------" <<endl;
	cout <<"Relational Operator:" <<endl;
	cout <<endl;
	cout <<boolalpha;
	cout <<"a < b: "<<(a < b) <<endl;
	cout <<"a > b: "<<(a > b) <<endl;  
	cout <<"a <= b: "<<(a <= b) <<endl; 
	cout <<"a >= b: "<<(a >= b) <<endl; 
	cout <<"a == b: "<<(a == b) <<endl;
	cout <<"a != b: "<<(a != b) <<endl; 

	cout <<"--------------------------" <<endl;
	cout <<"Logical Operator:" <<endl;
	cout << endl;
	cout << boolalpha;
	cout << "(a < b) && (a > b): " << ((a < b) && (a > b)) << endl;
	cout << "(a > b) || (a < b): " << ((a > b) || (a < b)) << endl;
	cout << "!(a > b): " << (!(a > b)) << endl;
	cout << "(!(a < b) && (a > b)): " << (!(a < b) && (a > b)) << endl;
	cout << "(!(a > b) || (a < b)): " << (!(a > b) || (a < b)) << endl;  

	cout <<"--------------------------" << endl;
	cout <<"Bitwise Operator:" << endl;
	cout <<" & --> AND\n |--> OR\n ^ --> XOR\n ~ --> NOT(bitwise complement)\n << --> Left shift by 1\n >> --> Right shift by 2"<<endl;
	cout << endl;
	cout <<"a & b = " << (a & b) << endl;
	cout <<"a | b = " << (a | b) << endl;
	cout <<"a ^ b = " << (a ^ b) << endl;
	cout <<"~a = " << (~a) <<endl;
	cout <<"a << 1 = " << (a << 1) << endl;
	cout <<"b >> 2 = " << (b >> 2) << endl;
	cout <<"---------X---------------";
	return 0;
}


