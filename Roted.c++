#include <bits/stdc++.h>
using namespace std;

// Function to rotate the array in place
void RotedArray(vector<int>& arr, int s, int e) {
    while (s <= e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

// Function to reverse the array parts
void reverse(vector<int>& arr, int k, int n) {
    RotedArray(arr, 0, n - 1);    // Reverse the entire array
    RotedArray(arr, 0, k - 1);    // Reverse the first k elements
    RotedArray(arr, k, n - 1);    // Reverse the remaining elements
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 3; // Number of positions to rotate

    // Perform the rotation
    reverse(arr, k, n);

    // Print the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
