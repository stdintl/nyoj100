/*haxin学长最喜欢吃披萨了,今天他买了好多张,但是haxin突发奇想,是不是可以把披萨们叠起来,得到尽可能少的披萨塔呢?
需要注意的是,haxin热衷于购买n张一模一样的披萨,每个披萨有自身的重量m,承载上限d(即每张披萨上面只能放置总重量小于等于d的披萨)
请计算出最少数量的披萨塔,每张披萨必须使用

输入描述

第一行包含一个整数 t(1 ≤ t ≤ 1e4) —— 测试用例的数量。
每个测试用例由一行包含三个整数 n,m,d(1≤n,m,d≤50)。

输出描述

对于每个测试用例，输出一个整数——最少塔的数量。*/
#include <iostream>
using namespace std;

int main () {
    int n, m, d;
    int t;
    int x;
    cin >> t;
    for (; t>0; t--) {
        cin >> n >> m >> d;
        int num = d/m + 1;
        if (n%num == 0) 
            x = n/num;
        else 
            x = n/num +1;
        cout << x << endl;
    }
    return 0;
}