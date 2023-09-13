#include<bits/stdc++.h>

using namespace std;


int main() {
    int m, n ;
    cin >> m >> n;
    int a[m];
    set<int> s;
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }
    bool flag = false ;
    for(int x : a)
    {
        if(s.find(x) == s.end())
        {
            cout << x << " ";
            flag = true;
        }
    }
    if(flag == false) cout <<"No";
    return 0;
}


