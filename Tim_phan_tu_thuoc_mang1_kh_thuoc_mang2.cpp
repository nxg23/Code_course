#include<bits/stdc++.h>
using namespace std ;

int main ()
{
   int T ;
   cin >> T;
   while(T--){
    int n, m ;
    cin >> n >> m;
    int a[n] ;
    set<int> s ;
    for(int i = 0; i < n; i++) cin >> a[i] ;
    for(int i = 0; i < m; i++){
      int x ;cin >> x;
      s.insert(x) ;
    }
    bool flag = false ;
    for(int x : a ){
      if(s.find(x) == s.end()){
        cout << x << " " ;
        flag = true ;
      }
    }
    if(flag == false) cout <<"NOT FOUND"<<" " ;
   }

    return 0;
}