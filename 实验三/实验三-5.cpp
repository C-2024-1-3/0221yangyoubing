
#include <iostream>
using namespace std;
int peach(int n) {
	if (n == 10)
		return 1;
	return (peach(n+1)+1)*2;
}

int main() {
	cout << "猴子第一天摘了" << peach(1) << "个桃子" << endl;
	return 0;
}
