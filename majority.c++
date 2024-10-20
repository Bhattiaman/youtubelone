#include<bits/stdc++.h>
using namespace std;

int findmajorityElement(vector<int>& arr, int n) {
    unordered_map<int, int> mp;  

  
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;  
    }

   
    for (auto it : mp) {
        if (it.second > n / 2) {  
            return it.first;  
        }
    }

    return -1;  
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};
    int n = arr.size();

    int result = findmajorityElement(arr, n);
    
    if (result != -1) {
        cout << "Majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
