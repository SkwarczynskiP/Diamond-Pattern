#include <iostream>
using namespace std;

int main() {
    int n, i, count;

    do {
        cout << "Please enter an integer value for n, where n > 0:";
        cin >> n;
        if (n <= 0) {
            cout << "Invalid value for n" << endl;
        }
    } while (n <= 0);

    cout << endl;

    for (i = 0; i <= (2*n); i++) {
        if (i >= 0 && i <= n) {
            for (count = 0; count < (n-i); count++) {
                cout << " ";
            }
            for (count = 0; count < (2*i + 1); count++) {
                cout << "*";
            }
        } else if (i > n && i <= (2*n)) {
            for (count = 0; count < (i-n); count++) {
                cout << " ";
            }
            for (count = 0; count < (4*n-2*i+1); count++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
