#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        vector <int> time(m);
        for (int i=0; i<m; i++) 
            cin >> time[i];
        sort (time.begin(), time.end());
    
        int t, num;
        if (a < b) {
            t = a;
            num = b - a - 1;
        }
        else {
            int t = n - a + 1;
            num = a - b - 1;
        }
        vector <int> ms(num);
        for (int i=0; i<num; i++) {
            ms[i] = t + num - i - 1;
        } 
        
        sort (ms.begin(), ms.end());
        int count = 0;
        int j = 0;
        for (int i=0; i<num && j<m; i++) {
            if (ms[i] >= time[j]) {
                count ++;
                j++;
            }
        }

        cout << count << '\n';


    }
    return 0;
}