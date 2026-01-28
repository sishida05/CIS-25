#include <iostream>
using namespace std;

int main() {

int score;

cout << "Pleae input your score (1-100) in the class: " << endl;
cin >> score;

if (score == 100) {
    cout << "A+! Perfect Score!" << endl;
} else if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else if (score >= 70) {
    cout << "Grade: C" << endl;
} else if (score == 0) {
    cout << "You can do better." << endl;
} else {
    cout << "Grade: F" << endl;
}

    return 0;
}