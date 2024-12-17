#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void getTime() {
		int h,m,s;
		cin >> h;
		cin >> m;
		cin >> s;
		hour = h, minute = m, sec = s;
	}
	void showTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.getTime();		//输入设定的时间
	t1.showTime();

	return 0;
}