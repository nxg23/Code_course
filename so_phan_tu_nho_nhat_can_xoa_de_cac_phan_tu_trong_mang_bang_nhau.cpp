#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
     cin >> n ;
     int a[n] ;
     int cnt = 0 , m = 0 ;
     for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        for(int j = i +1; j < n; j++){
         if(a[i] == a[j]) cnt++ ;
        }
       if(m < cnt ) m = cnt ;
        cnt = 0;
    }
     cout << n - m - 1 ;
    return 0 ;
}
