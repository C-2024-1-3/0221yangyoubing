
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    else if (num == 2)
        return true;
    else {
        for (int i = 2; i*i < num; i++) {
            if (num % i == 0) {
                return false;
                
            }
        }
        return true;
    }
}
int main()
{   
    int count = 0;
    for (int a = 2; count < 200; a++) {
        if (is_prime(a)) {
            cout << a << " ";
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }       
    }

    return 0;
}


