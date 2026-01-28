#include <iostream>
using namespace std;

int main() {

double salary;
int yearsOnJob;
cout << "Enter your annual salary: ";
cin >> salary;

if (salary >= 50000) {
    // This inner check only happens if the salary is high enough
    cout << "How many years have you been at your current job? ";
    cin >> yearsOnJob;
    if (yearsOnJob >= 2) {
        cout << "Congratulations! You qualify for the loan." << endl;
    } else {
        cout << "You must have been at your current job for at least 2 years." << endl;
    }
} else {
    cout << "You must earn at least $50,000 to qualify." << endl;
}

    return 0;
}