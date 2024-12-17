#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	~Point() {

	}
};

int main() {
	Point p0(60, 80);
	p0.setPoint(5, 10);
	p0.display();

	return 0;
}