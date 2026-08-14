/*@-@被安排了十进制转换二进制的作业，可这对@-@太简单了，再加上他很贪玩，就跑去玩了，让你解决这个问题

输入描述

输入一个自然数n，表示要被转换成二进制的数

输出描述

输出n的二进制形式
当然你可以用字符串也可以用数字来记录答案*/
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int num[33];
    int i = 0;
    while (n!=0) {
        i++;
        num[i] = n%2;
        n /= 2;
    }
    for (; i>0; i--) {
		cout << num[i];
    }

    return 0;
}