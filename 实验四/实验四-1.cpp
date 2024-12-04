#include <iostream>
using namespace std;

int main() {
	int a[10], b[10];
	int count = 0;
	//输入10个数字
	cout << "Enter 10 numbers:";
	for (int i = 0; i < 10; i++) {
		
		cin >> a[i];
	}
	//找出不同数字并存储
	for(int i=0;i<10;i++){
		bool isDistinct = true;
		for (int j=0;j<i;j++){			
			if (a[i]==a[j]) {
				isDistinct = false;
				break;
			}			
		}
		if (isDistinct) {
			b[count] = a[i];
			count++;
		}
			
	}
	//输出
	cout << "The distinct numbers are:";
	for (int k = 0; k < count; k++) {
		cout << b[k] << " ";
	}
	return 0;
}