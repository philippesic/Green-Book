#include <iostream>

using namespace std;

#include <sstream>
#include <string>

string compressString(const string& str) {
    
    if (str.empty()) {
        return str;
    }

    stringstream compressed;
    char currentChar = str[0];
    int count = 1;

    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] == currentChar) {
            ++count;
        } else {
            compressed << currentChar << count;
            currentChar = str[i];
            count = 1;
        }
    }

    
    compressed << currentChar << count;

    string compressedStr = compressed.str();
    
    
    return compressedStr.length() < str.length() ? compressedStr : str;
}

int main() {
    string input = "aabcccccaaa";
    string output = compressString(input);
    cout << "Compressed string: " << output << endl;
    return 0;
}
