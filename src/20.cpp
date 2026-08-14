/*有一条圆形的跑道，一圈的长度是L 米。
两个人从同一条起跑线同时出发，沿着同一个方向跑步。
第一个人每秒跑a 米，第二个人每秒跑 b 米。
跑得快的人第一次追上跑得慢的人时，他们各跑了多少圈？

保证两人的圈数都是整数。

输入描述

一行三个整数L,a,b

输出描述

输出两个整数，用空格隔开，表示两人跑的圈数。

如果两人速度相同，输出 Never*/
#include <iostream>
using namespace std;

int main () {
    long long L, a, b;
    cin >> L >> a >> b;
    if (a == b) {
        cout << "Never" << '\n';
        return 0;
    }
	
    int k;
	if (a<b)
        k = b-a;
    else 
        k = a-b;
    int i=1;
    for (; i*L%k != 0; i++);
    int time = i*L/k;
    cout << time*a/L << ' ' << time*b/L << '\n';
    
    return 0;
        
}