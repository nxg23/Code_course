#include<bits/stdc++.h>

using namespace std;

int main() {
    
   int T;
   cin >> T ;
   while (T--){
       int m  ;
    cin >> m ;
    int a[m]  ;
    for(int i = 0; i < m; i++) cin >> a[i] ;
    sort(a,a+m) ;
    int q ;
    cin >> q ;
    while(q--){
        int x ; cin >> x ;
        if(binary_search(a,a+m,x) == 1) cout << "Yes"<< endl  ;
        else cout << "No"<< endl ;
    }
    
   }   
    return 0;
}

