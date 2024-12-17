#include<iostream>
using namespace std;

class Cuboid {
private:
	int length;
	int width;
	int height;
public:
	void getCuboid() {
		int l, w, h;
		cout << "请输入长方柱的长宽高：";
		cin >> l;
		cin >> w;
		cin >> h;
		length = l, width = w, height = h;
	}
	void volume() {
		int V = length * width * height;
		cout << "体积：" << V << endl;
	}
	
};

int main() {
	Cuboid c1, c2, c3;
	c1.getCuboid();
	c1.volume();
	c2.getCuboid();
	c2.volume();
	c3.getCuboid();
	c3.volume();

	return 0;
}