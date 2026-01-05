/*
========================================
 C++ BASIC SYNTAX REFERENCE FILE
========================================
*/

#include <bits/stdc++.h>   // Includes almost all standard headers
using namespace std;

// Function example
int add(int a, int b) {
    return a + b;
}

int main() {

    // Fast I/O (important for DSA)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Output
    cout << "Hello from C++" << '\n';

    // Input: single value
    int x;
    cin >> x;
    cout << "x = " << x << '\n';

    // If-else
    if (x % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }

    // For loop
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << '\n';

    // While loop
    int i = 0;
    while (i < 3) {
        cout << i << " ";
        i++;
    }
    cout << '\n';

    // Array
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';

    // Function call
    cout << "Sum = " << add(2, 3) << '\n';

    return 0;
}
