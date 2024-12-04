
#include <iostream>
using namespace std;
void gcdandlcm(int a, int b,int &gcd,int &lcm) {
    if (a < b)
        swap(a, b);
    int num1 = a, num2 = b;
    for (int i = 0; b != 0; i++) {
        int t = a % b;
        a = b;
        b = t;
    }
    gcd = a;
    lcm = num1 * num2 / gcd;
}
int main()
{
    int m, n,gcd,lcm;
    cout << "请输入两个自然数：";
    cin >> m >> n;
    gcdandlcm(m, n, gcd, lcm);
    cout << "最大公因数为：" << gcd << endl;
    cout << "最小公倍数为：" << lcm << endl;

    return 0;
}

