#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout <<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "sum is" << sum << endl;
    return 0;
}