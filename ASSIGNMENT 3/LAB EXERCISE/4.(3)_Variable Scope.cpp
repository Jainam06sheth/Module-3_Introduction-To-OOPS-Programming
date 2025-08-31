#include <iostream>
using namespace std;

int globalVar = 10; //Global Variable

void localScopeFunction()
{
    int localVar = 20;//Local Variable
    cout << "\nInside localScopeFunction:" << endl;
    cout << "  ~>Local variable: " << localVar << endl;
    cout << "  ~>Global variable: " << globalVar << endl;
}

void modifyGlobalVar()
{
    globalVar = 50;
    cout << "\nInside modifyGlobalVar: globalVar changed to " << globalVar << endl;
}

int main() 
{
    cout << "\nIn main: " << endl;
    cout << "  Global variable before function call : " << globalVar << endl;
    localScopeFunction();
    modifyGlobalVar();

    cout << "  Global variable after modifyGlobalVar : " << globalVar << endl;

    return 0;
}
