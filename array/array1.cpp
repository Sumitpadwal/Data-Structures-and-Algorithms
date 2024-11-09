#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int getmin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Max value is: " << getmax(num, size) << endl;
    cout << "Min value is: " << getmin(num, size) << endl;

    return 0;
}
