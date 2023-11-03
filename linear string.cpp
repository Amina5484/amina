#include <iostream>
#include <string>
using namespace std;

int linearSearch(string arr[], int n, string x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    string arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string x;
    cout << "Enter the element to search: ";
    cin >> x;

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << result;
    }

    return 0;
}