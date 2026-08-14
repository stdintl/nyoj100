/*狗熊岭里有一个森林宝箱，需要输入密码才能打开。
为了防止光头强偷偷打开宝箱，熊大和熊二设计了一种特殊的密码生成方式：
熊大和熊二会各自输入一个正整数，要求：
两个数的位数相同；
两个数的每一位数字都在 5 到 9 之间。
宝箱会把这两个数相加，得到最终密码。
现在光头强偷看到了一个整数 x，他想知道：
x 有没有可能是熊大和熊二按照这种方式生成的森林密码？
或者说x有没有可能是宝箱密码

输入描述

第一行输入一个整数 T，表示测试数据组数。

接下来 T 行，每行输入一个整数 x。

输出描述

对于每组测试数据，输出一行。
如果 x 可以表示成两个森林能量码之和，输出：YES

否则输出：NO*/
#include <iostream>
using namespace std;

int main () {
    int T;
    cin >> T;
    for (; T>0; T--) {
        long long x;
        cin >> x;
        int i=x%10;
        if (i==9) {
           cout << "NO" <<endl;
            continue;
        }
        x /= 10;
        int check = 1;
        while (x > 9) {           
            int k = x%10;
            if (k==0) {
                check = 0;
            	break;
            }
            x /= 10;
        }
        
        if (x == 1 && check) {
            cout << "YES" <<endl;
        }
        else         
        	cout << "NO" << endl;
		
        
    }
    return 0;
}
