#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int n ;
   cin >> n ;
   int a[n] ;
   for(int i = 0; i < n; i++) cin >> a[i];
   vector<int> v(a,a+n);
   int q ;
   cin >> q ;
   v.erase(begin(v) + q - 1);
   for(int x : v) cout << x << " " ;
     
    return 0 ;
}

