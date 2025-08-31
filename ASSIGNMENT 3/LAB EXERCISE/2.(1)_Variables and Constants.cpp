#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int age = 19;
    string s_name = "JAINAM";
    float height = 5.5;
    char grade = 'A';
	const int max_Marks = 100;

    cout << "Student Details:" << endl;
    cout << "Age: " << age << endl;
    cout << "Student Name: " << s_name << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Maximum Marks Allowed: " << max_Marks << endl;

    int obtain_Marks = 80;
    int remain_Marks = max_Marks - obtain_Marks;

    cout << "Scored Marks: " << obtain_Marks << endl;
    cout << "Remaining Marks to Get Full: " << remain_Marks << endl;

    return 0;
}
