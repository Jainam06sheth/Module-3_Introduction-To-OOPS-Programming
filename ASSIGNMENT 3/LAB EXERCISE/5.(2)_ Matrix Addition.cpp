#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter matrix size : ";
    cin >> size;

    int A[size][size], B[size][size], C[size][size];

    // Input Matrix A
    cout << "\nEnter elements for Matrix A (" << size << "x" << size << "):\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            cout << "A|" << i + 1 << "||" << j + 1 << "| : ";
            cin >> A[i][j];
        }

    // Input Matrix B
    cout << "\nEnter elements for Matrix B (" << size << "x" << size << "):\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            cout << "B|" << i + 1 << "||" << j + 1 << "| : ";
            cin >> B[i][j];
        }

    // Matrix Addition
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Display Matrix Addition Step-by-Step (manual spacing)
    cout << "\nMatrix C = A + B\n";
    for (int i = 0; i < size; i++) {
        // Matrix A row
        cout << "  | ";
        for (int j = 0; j < size; j++) {
            if (A[i][j] < 10) cout << " "; // pad single-digit
            cout << A[i][j] << " ";
        }
        cout << "|";

        // '+' on first row only
        cout << (i == 0 ? " + " : "   ");

        // Matrix B row
        cout << "| ";
        for (int j = 0; j < size; j++) {
            if (B[i][j] < 10) cout << " ";
            cout << B[i][j] << " ";
        }
        cout << "|";

        // '=' on first row only
        cout << (i == 0 ? " = " : "   ");

        // Matrix C row
        cout << "| ";
        for (int j = 0; j < size; j++) {
            if (C[i][j] < 10) cout << " ";
            cout << C[i][j] << " ";
        }
        cout << "|\n";
    }

    return 0;
}

