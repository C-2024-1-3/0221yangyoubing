#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int parseHex(const char* const hexString) {
	int Len = strlen(hexString);
	
	int num=0;
	
	for (int i = 0; i < Len; i++) {
		char s = hexString[i];
		if (s >= 'A' && s <= 'F') {
			s = s - 'A' + 10;
		}
		if (s >= '0' && s <= '9') {
			s = s - '0';
		}
		num = num + s*pow(16, Len-i-1);
	}
	return num;
}

int main() {
	char number1[10];
	cin.getline(number1, 10);
	int number2 = parseHex(number1);
	cout << number2 << endl;

	return 0;
}