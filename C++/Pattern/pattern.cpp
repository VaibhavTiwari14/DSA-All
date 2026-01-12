#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    return 0; 
}

void pattern16(int n) {
    for(int i = 0 ; i < n ; i++){
        char c = 'A';
        for(int j = 0 ; j <= i ; j++){
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}

void pattern15(int n) {
    for(int i = 0 ; i < n ; i++){
        char c = 'A';
        for(int j = 0 ; j < n-i ; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    for(int i = 0 ; i < n ; i++){
        char c = 'A';
        for(int j = 0 ; j <= i ; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

void pattern13(int n) {
    int count = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern12(int n) {
    int space = 2*(n-1);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << j + 1;
        }
        for(int j = 0 ; j < space ; j++){
            cout << " ";
        }
        for(int j = i ; j >= 0 ; j--){
            cout << j + 1;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern11(int n) {
    for(int i = 0 ; i < n ; i++){
        int start = i % 2 == 0 ? 1 : 0;
        for(int j = 0 ; j <= i ; j++){
            cout << start << " ";
            start = !start;
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < i+1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

void pattern8(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (i) ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*(n-i) ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < (i) ; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (n - i - 1) ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*i + 1 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < (n - i - 1) ; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (n - i) ; j++){
            cout << (j+1) <<" ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (n - i) ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << (j+1) << " ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern1(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
