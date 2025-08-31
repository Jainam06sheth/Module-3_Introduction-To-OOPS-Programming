#include <iostream>
#include <cctype>    // For isalpha(), tolower()
#include <string>    // For string operations
using namespace std;

// Manual integer-to-string conversion (returns string)
string intToStr(int num) {
    if (num == 0) return "0";
    string result = "";
    while (num > 0) {
        result = char((num % 10) + '0') + result;
        num /= 10;
    }
    return result;
}

// Manual string comparison
bool manualCompare(const string& a, const string& b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

// Manual string append (just returns a + b)
string manualAppend(const string& a, const string& b) {
    return a + b;
}

int main() {
    string input;
    char ch;

    cout << "Enter a sentence: ";

    // Read input until newline
    while (cin.get(ch) && ch != '\n') {
        input += ch;
    }

    // 1. Clean input: keep only lowercase alphabetic characters
    string cleaned = "";
    for (int i = 0; i < input.length(); ++i) {
        if (isalpha(input[i])) {
            cleaned += tolower(input[i]);
        }
    }

    // 2. Reverse manually
    string reversed = "";
    for (int i = cleaned.length() - 1; i >= 0; --i) {
        reversed += cleaned[i];
    }

    // 3. Compare manually
    bool isPalindrome = manualCompare(cleaned, reversed);

    // 4. Join cleaned and reversed with delimiter
    string joined = manualAppend(cleaned, "_");
    joined = manualAppend(joined, reversed);

    // 5. Convert length to string manually
    string lenStr = intToStr(cleaned.length());

    // 6. Output
    cout << "\n--- Palindrome Check ---\n";
    cout << "Original Input   : " << input << endl;
    cout << "Original Length  : " << input.length() << endl;
    cout << "Processed Input  : " << cleaned << endl;
    cout << "Cleaned Length   : " << lenStr << endl;
    cout << "Reversed String  : " << reversed << endl;
    cout << "Joined Output    : " << joined << endl;
    cout << "Result           : " << (isPalindrome ? "=> It's a palindrome." : "=> Not a palindrome.") << endl;
    cout << "Thank you for checking palindrome." << endl;

    return 0;
}

