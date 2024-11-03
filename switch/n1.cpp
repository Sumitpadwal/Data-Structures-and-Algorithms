#include <iostream>
using namespace std;

void calculate(int amt) {
    int n100 = 0, n20 = 0, n10 = 0;

    switch (1)
    {
    case 1:
        n100 = amt / 100;
        amt %=100;
        
    case 2:
        n20 = amt / 20;
        amt %=20;
    
    case 3:
        n10 = amt / 10;
        amt %= 10;
        break;
}

cout << "100 are :" << n100 << endl;
cout << "20 are :" << n20 << endl;
cout << "10 are :" << n10 << endl;
}

int main() {
    int amt;
    cout << "amount :";
    cin >> amt;

    calculate(amt);
    return 0;
}