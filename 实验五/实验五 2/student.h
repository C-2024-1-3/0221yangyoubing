//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int NUM, const char NAME[20], char SEX);
private:
	int num;
	char name[20];
	char sex;
};
