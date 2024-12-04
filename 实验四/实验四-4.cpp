#include <iostream>
using namespace std;

const int maxSize = 80;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1+size2; i++) {
		if (i < size1) {
			list3[i] = list1[i];
		}
		else {
			list3[i] = list2[i - size1];
		}
	}
	for (int j = 0; j < size1 + size2; j++) {
		
		for (int k = j+1; k < size1 + size2; k++) {
			if (list3[j] > list3[k]) {
				int t = list3[j];
				list3[j] = list3[k];
				list3[k] = t;
			}
		}
	}
}

int main() {
	int size1, list1[maxSize], size2, list2[maxSize], list3[maxSize];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1+size2; i++) {
		cout << list3[i] << ",";
	}
	return 0;
		
}