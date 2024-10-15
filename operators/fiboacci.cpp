#include<iostream>
 using namespace std;

 int main() {
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++){
        int nn = a + b;
        cout << nn << " ";

        a = b;
        b = nn;
    }
 }