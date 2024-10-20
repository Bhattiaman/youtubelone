#include <iostream>
using namespace std;

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}

int main() {
    char str[] = "helloa";
    cout << countVowels(str); // Output: 2
    return 0;
}
