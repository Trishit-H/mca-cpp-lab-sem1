// Write a C++ Program to Count vowels in a String Using a Pointer.

#include <iostream>
using namespace std;

// Function prototypes
char to_lower(char ch);
bool is_vowel(char ch);

int main() {
	char str[] = "There are 7 days in a week!";
	int str_length = sizeof(str) / sizeof(str[0]);
	char *ptr = str;
	int count;
	
	cout << "String: " << str << endl;
	while (*ptr != '\0') {
		char temp_char = to_lower(*ptr);
		if (is_vowel(temp_char)) {
			count++;
		}
		ptr++;
	}
	
	cout << "Number of vowels: " << count << endl;
	
	return 0;
}

// Function to convert a uppercase
// character to lowercase
char to_lower(char ch) {
	if (ch >= 65 && ch <= 90) {
		ch = ch + 32;
	}
	
	return ch;
}

// Function to check if a character is vowel or not
bool is_vowel(char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		return true;
	}	
	
	return false;
}
