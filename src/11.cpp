/*你好新同学，相信你现在一定对周围的一切充满好奇，对未来的路有着迷茫。在这里你可以追求自己之前因学习而搁置的爱好，也可以继续努力登上更高的山巅。当然你也可以投身竞赛之路，通过学习与训练勇夺算法竞赛的桂冠。
那么现在，就让我们开始新的旅途，就从变量类型开始吧！

输入描述

请设计一段程序实现以下功能，
输入一个整数n(查询次数)；
接下来n行每行输入一个整数x(代表数据类型)和一个变量y；
x=1之后变量为浮点型；
x=2之后变量为整型
x=3之后变量为字符型；

输出描述

将变量y输出（浮点要保留6位）。*/
#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    int n, k;
    double j;
    long long m;
    char l;
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        scanf ("%d", &k);
        switch (k) {
        case 1: scanf ("%lf", &j);
                printf ("%.6f\n", j);
                break;
        case 2:scanf ("%lld", &m);
                printf ("%lld\n", m);
                break;
        case 3:scanf (" %c", &l);
                printf ("%c\n", l);
                break;               
        }
    }
    return 0;
}
