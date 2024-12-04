#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char*s1, const char*s2) {
	int s1len = strlen(s1);
	int s2len = strlen(s2);
	for (int i = 0; i < s2len - s1len; i++) {
		bool isSubString = true;
		for (int j = 0; j < s1len; j++) {
			if (s1[j] != s2[i + j]) {
				isSubString = false;
				break;
			}
		}
		if (isSubString) {
			return i;
		}
	}
	return -1;
}

int main() {
	char*S1,*S2;
	char s1[100], s2[100];
	S1 = s1;
	S2 = s2;
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int result = indexOf(S1, S2);

	cout << "indexOf('" << s1 << "','" << s2 << "')is" << result << endl;
	return 0;

}