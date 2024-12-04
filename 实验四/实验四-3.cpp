#include <iostream>
using namespace std;

int main() {
	//初始化100个柜子的状态，全都关闭
	bool locker[100];
	for (int i = 0; i < 100; i++) {
		locker[i] = false;
	}
	//学生进行柜子的开关，直到s100操作l100
	for (int s = 1; s <= 100; s++) {	//学生1-100
		int index = s - 1;				//数组下标=柜子号码-1
		while (index < 100) {			//学生找到对应的柜子并进行开关
			if (locker[index])
				locker[index] = false;
			else
				locker[index] = true;
			index += s;
		}
	}
	//输出打开的柜子的号码
	cout << "打开的柜子：";
	for (int i = 0; i < 100; i++) {
		if (locker[i])
			cout << i+1 << " ";
	}
	return 0;
}