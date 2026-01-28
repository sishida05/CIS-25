#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << "Default: " << num << endl;

    cout << setprecision(4);
    cout << "Fixed, 4 decimals: " << num << endl;
    
    cout << fixed << setprecision(2);
    cout << "Fixed, 2 decimals: " << num << endl;

    // Table example
    cout << endl << "Receipt:" << endl;
    cout << setw(20) << "Item" << setw(10) << "Price" << endl;
    cout << setw(20) << "Hamburger" << setw(10) << 5.99 << endl;
    cout << setw(20) << "Fries" << setw(10) << 2.49 << endl;
    cout << setw(20) << "Drink" << setw(10) << 1.99 << endl;

    return 0;
}
