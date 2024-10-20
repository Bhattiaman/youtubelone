#include <iostream>
using namespace std;

char mostFrequentChar(char str[]) {
    int count[256] = {0}; // ASCII character set
    int maxCount = 0;
    char result;

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
        if (count[str[i]] > maxCount) {
            maxCount = count[str[i]];
            result = str[i];
        }
    }
    return result;
}

int main() {
    char str[] = "banana";
    cout << mostFrequentChar(str); // Output: "a"
    return 0;
}
