#include <iostream>
#include <algorithm>

using namespace std;

bool checkPermutation(const string& str1, const string& str2) {
  if (str1.length() != str2.length()) {
    return false;
  }

  string sortedStr1 = str1;
  string sortedStr2 = str2;
  sort(sortedStr1.begin(), sortedStr1.end());
  sort(sortedStr2.begin(), sortedStr2.end());

  return sortedStr1 == sortedStr2;
}

int main() {
  string str1, str2;
  cout << "Enter the first string: ";
  cin >> str1;
  cout << "Enter the second string: ";
  cin >> str2;

  if (checkPermutation(str1, str2)) {
    cout << "The strings are permutations of each other." << endl;
  } else {
    cout << "The strings are not permutations of each other." << endl;
  }

  return 0;
}