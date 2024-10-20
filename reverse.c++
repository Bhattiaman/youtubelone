#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7};
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        swap(arr[s], arr[e]);  
        s++;
        e--;
    }

     reverse(arr.begin(), arr.end());  // Use the STL reverse function

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7};
    stack<int> st;

    // Push all elements into the stack
    for (int i = 0; i < arr.size(); i++) {
        st.push(arr[i]);
    }

    // Pop elements from the stack back into the array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = st.top();
        st.pop();
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

