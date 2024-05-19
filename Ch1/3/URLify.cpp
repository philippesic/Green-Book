#include <iostream>
#include <string>

using namespace std;

void URLify(string& str, int trueLength) {
    int spaceCount = 0;
    for (int i = 0; i < trueLength; i++) {
        if (str[i] == ' ') {
            spaceCount++;
        }
    }

    int index = trueLength + spaceCount * 2;
    for (int i = trueLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index -= 3;
        } else {
            str[index - 1] = str[i];
            index--;
        }
    }
}

int main() {
    string str = "Mr John Smith    ";
    int trueLength = 13;

    URLify(str, trueLength);

    cout << "URLified string: " << str << endl;

    return 0;
}