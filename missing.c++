#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>& arr, int n) {
    // Create a hash set to store the elements of the array
    unordered_set<int> hashSet(arr.begin(), arr.end());
    
    // Check for the missing number in the range from 0 to n
    for (int i = 0; i <= n; i++) {
        if (hashSet.find(i) == hashSet.end()) {
            return i; // Return the missing number
        }
    }
    return -1; // If no number is missing (this should never happen given the problem constraints)
}

int main() {
    vector<int> arr = {0, 1, 2, 4, 5}; // Example array with a missing number
    int n = arr.size(); // n represents the length of the array

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}



// using sum formula'
// EASY 
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7}; // Example array with a missing number
    int n = arr.size();
    
    // Maximum number that should be present in the sequence (7 in this case)
    int max_number = 7; 
    
    // Correct sum formula
    int total_sum = max_number * (max_number + 1) / 2;
    
    // Sum of elements in the array
    int sum_of_array = 0;
    for (int i = 0; i < n; i++) {
        sum_of_array += arr[i];
    }
    
    // The missing number is the difference
    cout << "The missing number is: " << total_sum - sum_of_array << endl;
    
    return 0;
}
