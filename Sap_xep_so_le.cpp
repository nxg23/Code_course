#include<bits/stdc++.h>
using namespace std ;
void sapxep(int n, int a[] )
{
  for(int i = 0; i < n -1; i++){
     if(a[i] % 2 == 1){
    for(int j = i +1 ; j < n; j++){
      if(a[i] > a[j] && a[j] % 2 == 1) swap(a[i], a[j]) ;
    }
     }
  }
  for(int i = 0; i < n; i++) cout << a[i] << " " ;
}
int main ()
{
  int n ;
   cin >> n ;
   int a[n] ;
   for(int i = 0; i < n; i++) cin >> a[i] ;
   sapxep(n,a);
}