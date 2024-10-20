#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string &str) {
    unordered_map<char, int> count; // Map to store character counts

    // Count the occurrences of each character
    for (char ch : str) {
        count[ch]++;
    }

    // Find the first non-repeating character
    for (char ch : str) {
        if (count[ch] == 1) {
            return ch; // Return the first non-repeating character
        }
    }

    return '\0'; // If no non-repeating character
}

int main() {
    string str = "swiss";
    char result = firstNonRepeatingChar(str);
    if (result != '\0') {
        cout << result << endl; // Output: "w"
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
