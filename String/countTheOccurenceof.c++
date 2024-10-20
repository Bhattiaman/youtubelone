#include <iostream>
using namespace std;

int countCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }
    return count;
}

int main() {
    char str[] = "hello ll";
    cout << countCharacter(str, 'l'); // Output: 4
    return 0;
}
