/*伟大的魔王、深渊的主宰者——NullptrSoul 之神，正准备对妄图讨伐他的勇者们降下终极神罚。魔王城外有一条由 N 个魔法节点组成的直线地脉，第 i 个节点蕴含着 a i
  的暗影魔力。由于遭到光明力量的干扰，部分节点被污染了，其魔力值为负数（强行吸收会反噬魔王）。为了发动神罚，NullptrSoul 必须从地脉中选择恰好 K 个连续的魔法节点，并将它们的魔力一次性全部吸收。请你帮魔王大人写一个程序，计算他通过这种方式最多能吸收多少暗影魔力？输入描述第一行包含两个正整数 N 和 K，用空格隔开。表示魔法节点的总数和需要连续吸收的节点数。（1≤K≤N≤10 5）第二行包含 N 个整数，第 i 个整数表示 

输入描述

第一行包含两个正整数 N 和 K，用空格隔开。表示魔法节点的总数和需要连续吸收的节点数。（1≤K≤N≤10 5）第二行包含 N 个整数，第 i 个整数表示 

输出描述

输出一个整数，表示魔王 NullptrSoul 最多能吸收的暗影魔力总量。*/
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector <int> num(n+10);
    vector <long long> sum(n+10);
    vector <long long> sumk(n+10);
    for (int i=1; i<=n; i++) {
        cin >> num[i]; 
        sum [i] = num[i] + sum[i-1];
    }
    long long max = LLONG_MIN;
    for (int i=0; i<n-k+1; i++) { 
        sumk[i] = sum[i+k] - sum[i];
        max = sumk[i] > max ? sumk[i] : max;
    }

    cout << max << endl;
    
    return 0;
}