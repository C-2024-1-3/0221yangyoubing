#include <iostream>
using namespace std;

class Student {	
public:
	long No;
	int score;
	Student(long num, int sc) {
		No = num, score = sc;
	}
	
};
int max(Student(*stu_p)[5]) {
	int Max = (*stu_p)[0].score;
	int maxNo = (*stu_p)[0].No;

	for (int i = 0; i < 5; i++) {
		if ((*stu_p)[i].score > Max) {
			Max = (*stu_p)[i].score;
			maxNo= (*stu_p)[i].No;
		}
	}
	return maxNo;
}
int main() {
	Student stu[5] = { Student(01,90),Student(02,85),Student(03,96),Student(04,88),Student(05,92) };
	Student(*stu_p)[5];
	stu_p = &stu;
	cout << "成绩最高者学号为：" << max(&stu) << endl;
	return 0;
}