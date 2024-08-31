#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int position = 3;
    if (position > n || position <= 0) {
        cout << "Invalid position!" << endl;
        return 1;
    }
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

