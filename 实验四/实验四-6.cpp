#include<iostream>
#include<cstring>
using namespace std;

void count(const char s[], int counts[]) {
	int sLen = strlen(s);
	for (int i = 0; i < strlen(s); i++) {
		char s1 = s[i];
		if (s1 >= 'A' && s1 <= 'Z') {
			s1 = s1 + 32;
		}
		if (s1 >= 'a' && s1 <= 'z') {
			int t = s1 - 'a';
			counts[t]++;
		}
	}
	for (int j = 0; j < 26; j++) {
		char letter = j + 'a';
		if (counts[j] != 0) {
			cout << letter << ":" << counts[j] << "times" << endl;
		}
	}
}

int main() {
	char s[100];
	cout << "Enter a string:";
	cin.getline(s, 100);
	int counts[26];
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	count(s, counts);

	return 0;
}