/*某次考试，根据分数划分等第：

优秀：90分及以上

良好：75分到89分（含两端）

中等：60分到74分（含两端）

不及格：60分以下

给定一个学生的分数，请判断他属于哪个等第。

输入描述

第一行一个整数 t（1≤t≤10），表示学生人数。
接下来 t 行，每行一个整数 s（0≤x≤100），表示分数。

输出描述

对于每个学生，输出一行，格式为 “X”，其中 X 为优秀、良好、中等、不及格之一。*/

#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    int i = 0;
    for (; t>0; t--) {
        cin >> i;
        if (i<60) 
            cout << "不及格" << endl;
        else if (i>=60 && i<=74)
            cout << "中等" << endl;             
        else if (i>=75 && i<=89) 
            cout << "良好" << endl;
        else
            cout << "优秀" << endl;
        
    }
    return 0;
}
