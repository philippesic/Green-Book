#include <iostream>
#include <string>

using namespace std;

bool isOneAway(const string& str1, const string& str2) {
	int len1 = str1.length();
	int len2 = str2.length();

	if (abs(len1 - len2) > 1) {
		return false;
	}

	int count = 0;
	int i = 0, j = 0;

	while (i < len1 && j < len2) {
		if (str1[i] != str2[j]) {
			count++;

			if (count > 1) {
				return false;
			}

			if (len1 > len2) {
				i++;
			} else if (len2 > len1) {
				j++;
			} else {
				i++;
				j++;
			}
		} else {
			i++;
			j++;
		}
	}

	if (i < len1 || j < len2) {
		count++;
	}

	return count <= 1;
}

int main() {
	string str1, str2;
	cout << "Enter the first string: ";
	cin >> str1;
	cout << "Enter the second string: ";
	cin >> str2;

	if (isOneAway(str1, str2)) {
		cout << "Strings are one edit away." << endl;
	} else {
		cout << "Strings are not one edit away." << endl;
	}

	return 0;
}
