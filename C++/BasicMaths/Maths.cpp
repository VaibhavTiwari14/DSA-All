#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;

    return 0;
}

int countDigits(int n) {
    // return (int) log10(n) + 1;
    int count = 0;
    while(n > 0) {
        int lastDigit = n%10;
        count++;
        n /=10;
    }
    return count;
}

int reverseANumber(int n) {
    int num = 0;
    while(n > 0){
        int lastDigit = n % 10;
        num = num*10 + lastDigit;
        n /=10;
    }
    return num;
}

bool checkPalindrome(int n) {
    return n == reverseANumber(n);
}

bool armstrongNumber(int n) {
    int sum = 0, num = n;
    while(num > 0){
        int lastDigit = n%10;
        sum += (int) pow(lastDigit,3);
        n /= 10;
    }
    return num == sum;
}

void printAllDivisors(int n) {
    vector<int> v;
    // for(int i = 1; i <= sqrt(n) ; i++){
    for(int i = 1; i*i <= n ; i++){
        if(n%i == 0){
            v.push_back(i);
            if(i*i != n) {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

bool checkPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int j = 5; j*j <= n ; j += 6){
        if(n % j == 0 || n % (j+2) == 0) return false;
    }

    return true;
}

int gcdHcf(int a, int b) {
    if(b == 0) return a;
    return gcdHcf(b, a%b);
}

int lcm(int a, int b) {
    return (a*b) / gcdHcf(a,b);
}


