//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int NUM, const char NAME[20], char SEX);
private:
	int num;
	char name[20];
	char sex;
};
