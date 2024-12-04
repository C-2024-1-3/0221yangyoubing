#include <iostream>
using namespace std;
void arrange(int* p,int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (p[j] < p[i]) {
				int t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}
int main() {
	int* p;
	int size;
	cout << "请输入数组长度：";
	cin >> size;
	p = new int [size];
	
	cout << "输入数组元素：";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
	arrange(p,size);
	for (int j = 0; j < size; j++) {
		cout << p[j] << ",";
	}
	delete[]p;

	return 0;
}