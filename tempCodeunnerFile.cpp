#include <iostream>
using namespace std;

int main() {
    int n;  // Height of the pyramid
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Print spaces before the first star
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars and spaces for the current row
        if (i == n) {
            // Special case: Last row, print exactly n stars
            for (int j = 1; j <= n; j++) {
                cout << "* ";
            }
        } else {
            for (int j = 1; j <= 2 * i - 1; j++) {
                // Print stars at the boundaries of the row
                if (j == 1 || j == 2 * i - 1) {
                    cout << "*";
                } else {
                    cout << " "; // Hollow spaces
                }
            }
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
