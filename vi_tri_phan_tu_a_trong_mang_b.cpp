#include<bits/stdc++.h>

using namespace std;


int main() {
    
 int m ,n ;
 cin >> m ;
 int a[m] ;
 for(int i = 0; i < m; i++) cin >> a[i] ;
 cin >> n ;
 int b[n] ;
 for(int i = 0; i < n; i++) cin >> b[i] ;
 for(int i = 0; i < m; i++){
   int cnt = 0;
    for(int j = 0; j < n; j++){
        if(a[i] == b[j]) {
            cout << j << " " ;
            cnt++ ;
            break;
        }
    }
    if(cnt == 0) cout << "-1";
 }

    return 0;
}

