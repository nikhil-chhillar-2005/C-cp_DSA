#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        // Left stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}