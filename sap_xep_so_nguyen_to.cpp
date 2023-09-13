#include<bits/stdc++.h>
using namespace std ;
bool check(int n ){
  int sq = sqrt(n) ;
  if(n < 2) return false ;
  else if(n > 2){
    for(int i = 2; i <= sq; i++){
     if(n % i == 0) return false ;
    }
  }
  return true ;
}
void sapxep(int n, int a[] )
{
  for(int i = 0; i < n -1; i++){
     if(check(a[i])){
    for(int j = i +1 ; j < n; j++){
      if(a[i] > a[j] && check(a[j])) swap(a[i], a[j]) ;
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