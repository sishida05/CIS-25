#include <iostream>
using namespace std;

int main() {

int score;
cout << "Enter your test score (0-100): ";
cin >> score;

if (score >= 0 && score <= 100) {
    // Input is valid, so we proceed with our logic.
    if (score >= 60) {
        cout << "You passed!" << endl;
    } else {
        cout << "You did not pass." << endl;
    }
} else {
    // Input is invalid, so we print an error message.
    cout << "Error: The score must be between 0 and 100." << endl;
}

    return 0;
}