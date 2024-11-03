#include<iostream>
#include<cmath>
using namespace std;

// 1 -> prime number
// 0 -> not a prime number
bool isprime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    if (isprime(n)) {
        cout << "is prime" << endl;
    } else {
        cout << "not prime" << endl;
    }
}