#include <iostream>
using namespace std;

int main() {

int score;
cout << "Enter your test score (0-100): ";
cin >> score;

switch(score) {
    // Input is valid, so we proceed with our logic.
    case 100:
        cout << "Perfect score!" << endl;
        break;
    case 70:
        cout << "Barely made it!" << endl;
    break;
    case 0:
        cout << "You can do better!" << endl;
    default:
        cout << "I'm too lazy to actually make a case for the other scores." << endl;
    }

    return 0;
}