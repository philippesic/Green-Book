#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindromePermutation(const string& str) {
    
    string formattedStr = str;
    formattedStr.erase(remove_if(formattedStr.begin(), formattedStr.end(), ::isspace), formattedStr.end());
    transform(formattedStr.begin(), formattedStr.end(), formattedStr.begin(), ::tolower);

    
    int oddCount = 0;
    int charCount[26] = {0};

    for (char c : formattedStr) {
        if (isalpha(c)) {
            charCount[c - 'a']++;
            if (charCount[c - 'a'] % 2 == 1) {
                oddCount++;
            } else {
                oddCount--;
            }
        }
    }

    return oddCount <= 1;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindromePermutation(str)) {
        cout << "The string is a palindrome permutation." << endl;
    } else {
        cout << "The string is not a palindrome permutation." << endl;
    }

    return 0;
}