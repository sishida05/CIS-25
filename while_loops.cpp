#include <iostream>
using namespace std;

int main() {
    int i = 1; // 1. Initialization
    while (i <= 5) { // 2. Test
        cout << "Hello! i is now " << i << endl;
        i = i + 1; // 3. Update (can also be written as i++)
    }
    cout << "Loop finished." << endl;
    return 0;
}
