/*对一个正整数 n 反复执行以下操作：
如果当前数是偶数，则将它除以 2
如果当前数是奇数，则将它乘以 3 再加 1
直到这个数变成 1 为止。
请问需要多少次操作？

输入描述

一行一个整数 n(1≤n≤10 6)

输出描述

一行一个整数，表示操作次数*/
#include <iostream>
using namespace std;

int main () {
    long long n;
    cin >> n;
    int count = 0;
    while (n != 1) {
        if (n%2 == 0) {
            n /= 2;
            count ++;
        }
        else {
            n = n*3 + 1;
            count ++;
        }        
    }
    cout << count << endl;
    
    return 0;
}
