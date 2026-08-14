/*输入一个整数，输出它各位数字之和。

输入描述

一个整数 n(-10⁹ ≤ n ≤ 10⁹)

输出描述

一个整数，表示 n 的各位数字之和。*/
#include <iostream>
using namespace std;

int main () {
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0) {
        count += n%10;
        n /= 10;
    }
    if (count < 0)
        count = -count;
    cout << count << endl;
    
    return 0;
}