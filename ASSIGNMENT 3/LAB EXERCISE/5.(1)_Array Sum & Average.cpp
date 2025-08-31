#include <iostream>
using namespace std;

int main() 
{
    int n, sum = 0;
    double average;

    cout << "Enter The Number Of Elements: ";
    cin >> n;

    if (n <= 0 || n > 100) 
    {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    int arr[100];  // Fixed-size array

    cout << "\nEnter Elements For The Array :" << endl;
    for (int i = 1; i <= n; i++) 
    {
        cout << "Array[" << i << "] : ";
        cin >> arr[i - 1];
        sum += arr[i - 1];
    }

    average = (double)sum / n;

    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
} 
