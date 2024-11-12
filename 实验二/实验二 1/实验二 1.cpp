
#include <iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    //1.
    char ch;
    cin >> ch;

    if (int(ch) < 123 && int(ch)>96) {
        char CH = ch - 32;
        cout << CH << endl;
    }
    else cout << int(ch) + 1 << endl;

    //2.
    float x, y;
    cout << "输入x：";
    cin >> x;

    if (x > 0 && x < 1) { y = 3 - 2 * x; cout << y << endl; }
    else if (x >= 1 && x < 5) { y = 2.0 / 4 * x + 1; cout << y << endl; }
    else if (x >= 5 && x < 10) { y = x * x; cout << y << endl; }
    else cout << "不在定义域内" << endl;

    //3.
    int a, b, c;
    cout << "输入边长：";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        cout << "周长=" << a + b + c << endl;
        if (a == b || a == c || b == c) {
            cout << "是等腰三角形" << endl;
        }
        else cout << "不是等腰三角形" << endl;
    }
    else cout << "不能构成三角形" << endl;

    //4.
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch (c) {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << a / b << endl;
        else cout << "分母不能为0" << endl;
        break;
    case '%':
        if (b != 0)
            cout << a % b << endl;
        else cout << "分母不能为0" << endl;
        break;
    default:
        cout << "运算符非法" << endl;

     //5.
        string line;
        int letter = 0, space = 0, number = 0, other = 0;

        cout << "请输入字符：";
        getline(cin, line);

        for (char c : line) {
            if (isalpha(c))
                ++letter;
            else if (isspace(c))
                ++space;
            else if (isdigit(c))
                ++number;
            else
                ++other;
        }
        cout << "中英文字符个数：" << letter << endl;
        cout << "空格个数：" << space << endl;
        cout << "数字字符个数：" << number << endl;
        cout << "其他字符个数：" << other << endl;

    //6.
        int a, b;
        cout << "输入两个整数:";
        cin >> a >> b;

        if (a < b)
            swap(a, b);

        while (b != 0) {
            int t = a % b;
            a = b;
            b = t;
        }

        int j;
        for (j = 1;; j++) {
            if (j % a == 0 && j % b == 0) {

                break;
            }
        }

        cout << "最大公约数：" << a << endl;
        cout << "最小公倍数：" << j << endl;

     //7.
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }


        //8.
        float i, a, x = 0;
        cin >> a;
        if (a > 0) {
            for (i = a; fabs(i - x) > (1e-10); ) {
                x = i;
                i = (i + a / i) / 2;

            }

            cout << i << endl;
        }
        else cout << "错误" << endl;

        //9.
        const float price = 0.8;
        float money = 0, apple = 0;      //money是总金额，apple是总苹果数
        int i, j;        //i是天数，j是每天购买的苹果数
        for (i = 1, j = 2; ; j = 2 * j, i++) {
            apple = apple + j;
            money = money + price * j;

            if (apple >= 100) break;
        }
        cout << i << endl;
        cout << apple << endl;
        cout << money << endl;
        cout << "每天平均花" << money / i << "元" << endl;


    return 0;
}


