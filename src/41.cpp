/*道路总长度为 L（起点到终点的距离）。起点和终点之间原本有 N 个路标，每个路标与起点的距离为
D_i（严格递增，且 0 < D_i < L）。薇尔莉特可以从起点出发，每次跳到下一个路标或终点，
她可以移除至多 M 个路标（不能移除起点和终点）。
移除后，她将按顺序依次经过剩余的路标（包括起点和终点），并计算相邻两点之间的距离。
她希望这些距离中的最小值尽可能大。请输出这个最大值。
第一行三个整数 L, N, M，含义如上。
接下来 N 行，每行一个整数 D_i，表示第 i 个路标与起点的距离。
数据范围：1 ≤ L ≤ 1e9，0 ≤ M ≤ N ≤ 50000，0 < D_i < L，且 D_i 严格递增。*/

//反向思维:直接给出最小距离,再验证是否可行;

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, m, n;
    cin >> l >> n >> m;
    vector <int> num(1);
    for (int i=1; i<=n; i++) {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }  
    num.push_back(l);

    //二分:根据具体情境确定边界条件;
    int ans;
    int left = 0, right = l, mid;
    while (left <= right) {
        int count = 0;       
        mid = (left + right) / 2;
        int temp = 0;
        for (int i=1; i<=n+1; i++) {   
            if (num[i] - temp < mid) {
                count ++;           
            }
            else {
                temp = num[i];
            }
    
        }      
        if (count <= m) {
            left = mid + 1;
            ans = mid;
        }
        else 
            right = mid - 1;
    }


    cout << ans << '\n';

    return 0;
}