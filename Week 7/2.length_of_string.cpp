//  Write a C++ Program for the Length of a String Using a Pointer.

#include <iostream>
using namespace std;

int main() {
	char str[] = "Gifted!";
	char *ptr = str;
	
	int str_length = 0;
	
	while (*ptr != '\0') {
		str_length++;
		ptr++;
	}
	
	cout << "String: " << str << endl;
	cout << "Length of the string: " << str_length << endl;
	
	return 0;
}
