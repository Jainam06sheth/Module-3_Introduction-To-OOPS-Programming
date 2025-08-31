//1.INTRODUCTION TO C++
//2. Basic Input/Output 
#include <iostream>
using namespace std;

int main() 
{
    string name;
    int age;

    cout << "Enter your name: "<<endl;
    cin >> name;  

    cout << "Enter your age: "<<endl;
    cin >> age;
    
    cout<<"--------------------------------" <<endl;
    cout<<endl;
    cout << "Hello, " << name << "! You are " << age << " years old."<<endl;

    return 0;
}

