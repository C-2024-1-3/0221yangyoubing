#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//1.
	int k=1;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;

	//2.
	const float pi = 3.14;
	float r, h, V;
	cout << "请输入圆锥的半径，锥高：";
	cin >> r >> h;
	V = 1.0 / 3 * pi * r * r * h;
	cout << "圆锥的体积为：" << V << endl;

	//3.
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;


	//4.
	unsigned int testUnint = 65534; //oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;
	cout << "output in 8进制:" << oct << testUnint << endl; //<<oct;
	cout << "output in char type:!" << static_cast <char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;   //为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	system("pause");

	//5.
	double f, c;
	cout << "请输入华氏温度：";
	cin >> f;
	c = 5.0 / 9 * (f - 32);
	cout << "摄氏温度为：" << fixed << setprecision(2) << c << "℃" << endl;

	return 0;
}
