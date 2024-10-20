#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 1, 3};
    int n = arr.size();
    unordered_map<int, int> mp;

    // Populate the frequency map
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;  // Increment the frequency of each element
    }

    // Output the frequency of each element
    for (auto st : mp) {
        cout << "Element: " << st.first << ", Frequency: " << st.second << endl;
    }

    return 0;
}
