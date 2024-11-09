#include<iostream>
using namespace std;

void printarray(int arr[], int size) {

    cout<< "print array " << endl;
    for(int i = 0; i <= size; i++) {
        cout << arr[i] <<" ";
    }

}
int main() {
    int num[5];

    //cout<<num[0]<<endl;

    cout << "fine"<<endl;

    int num1[15] = {3,25};
    int numsize = sizeof(num1)/sizeof(int);
    cout<< "size :"<<numsize<< endl;

    //int n = 15;
    //printarray(num1, 15);
    //cout<<endl;

    char ch[5] = {'a','b','c','d','e'};
    cout << ch[3]<<endl;
    cout<< "print array" << endl;
    for(int i = 0; i <5;i++) {
        cout << ch[i] << " ";
    }

    
    return 0;
}