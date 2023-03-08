// Write a Program to check if two strings are Anagram or not
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
void Anagram(string str, string str2) {
  sort(str.begin(), str.end());

  // convert string to lowercase
  transform(str.begin(), str.end(), str.begin(),
            [](char c) { return tolower(static_cast<unsigned char>(c)); });
  sort(str2.begin(), str2.end());

  // convert string to lowercase
  transform(str2.begin(), str2.end(), str2.begin(),
            [](char k) { return tolower(static_cast<unsigned char>(k)); });
  if (str == str2) {
    cout << "Anagram";
  } else {
    cout << "Not Anagram";
  }
}

int main() {
  string str = "sunlight";
  string str2 = "thgilunsh";
  Anagram(str, str2);
  return 0;
}