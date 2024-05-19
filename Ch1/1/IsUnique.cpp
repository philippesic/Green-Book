#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool isUnique(const string& str) {
	unordered_set<char> charSet;
	for (char c : str) {
		if (charSet.count(c) > 0) {
			return false;
		}
		charSet.insert(c);
	}
	return true;
}

int main() {
	string str;
	cout << "Enter a string: ";
	cin >> str;

	if (isUnique(str)) {
		cout << "The string has all unique characters." << endl;
	} else {
		cout << "The string has duplicate characters." << endl;
	}

	return 0;
}