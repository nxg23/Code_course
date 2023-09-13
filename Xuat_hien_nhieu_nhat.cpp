#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 int T ;
 cin >> T ;
 while(T--){
 cin >> n ;
 int a[n] ;
 map<int, int> mp;
 for(int i = 0; i < n;i++) {
   int x ; cin >> x ;
   mp[x]++;
 }
 int res= 0, max = 0;
 for(auto it : mp){
   if(max <= it.second) {
      max =it.second  ;  
       res = it.first ;               
 }
  }
   cout << res << " " << max << endl ;
 }
}

