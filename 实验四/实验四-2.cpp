#include <iostream>
using namespace std;

void bubbleSort(double list[],int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j],list[j + 1]);
				changed = true;
			}
	} while (changed);

}

int main() {
	double a[10] = { 1.0,2.3,1.2,1.5,6.4,2.0,7.0,1.0,3.0,10.0 };
	bubbleSort(a, 10);
	
	for (int i = 0; i < 10; i++) {
		cout << a[i]<<" ";
	}
	return 0;
}