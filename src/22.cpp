/*输入一个学生的三门课成绩，分别为语文、数学、英语。
请你计算三门课的平均分，并判断该学生是否及格。
平均分大于等于 60.00，输出"good",
否则输出"fail".

输入描述

输入一行，包含三个实数，分别表示三门课成绩。
保证三个数的区间是[0,100]

输出描述

第一行输出平均分。
平均分取两位小数
第二行输出 “good” 或 “fail”。*/
#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    double sum = 0;
    for (int i=0; i<3; i++) {
        double k;
        scanf ("%lf", &k);
        sum += k;
    }
    double x = sum/3.0;
    printf ("%.2lf\n", x);
    if (x>=60.00)
        printf ("good\n");
    else
        printf ("fail\n");
    
    return 0;
}