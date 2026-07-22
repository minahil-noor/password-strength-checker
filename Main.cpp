#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password; 
    int score = 0; 
    int length;
    int hasUpper = 0;
    int hasDigit = 0; 
    int hasSymbol = 0;

    cout << "Enter your password: "; 
    getline(cin, password);

    length = password.length();

    for (int i = 0; i < length; i++) { 
        char c = password[i];
        if (isupper(c)) { 
            hasUpper = 1; 
        }
        if (isdigit(c)) { 
            hasDigit = 1; 
        }
        if (ispunct(c)) { 
            hasSymbol = 1; 
        }
    }

    if (hasUpper == 1) { score++; }
    if (hasDigit == 1) { score++; }
    if (hasSymbol == 1) { score++; }
    if (length >= 8)   { score++; }

    cout << "\n--- Password Check Result ---" << endl;
    cout << "Length: " << length << endl;
    cout << "Has Uppercase Letter: " << (hasUpper == 1 ? "Yes" : "No") << endl; 
    cout << "Has Number: " << (hasDigit == 1 ? "Yes" : "No") << endl;
    cout << "Has Symbol: " << (hasSymbol == 1 ? "Yes" : "No") << endl;
    cout << "Score: " << score << " out of 4" << endl;

    if (length < 8) {
        cout << "Password Strength: Weak" << endl;
    } 
    else if (score <= 2) {
        cout << "Password Strength: Weak" << endl;
    } 
    else if (score == 3) {
        cout << "Password Strength: Medium" << endl;
    } 
    else if (score == 4) {
        cout << "Password Strength: Strong" << endl;
    }

    return 0;
}