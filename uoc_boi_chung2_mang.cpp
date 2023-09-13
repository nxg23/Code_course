#include<bits/stdc++.h>

using namespace std;
int check(int a[], int b[], int m, int n){
    int cnt = 0;
    for(int i = 1; i <= 100; i++){
        bool test1 = true ;
        bool test2 = true ;
        for(int j = 0; j < m; j++){
            if(i % a[j] != 0){
             test1 = false ;
            break;
            }
        }
         for(int j = 0; j < n; j++){
            if(b[j] % i != 0) {
            test2 = false ;
            break ;
            }
        }
        if(test1 && test2) cnt ++ ;
    }
    return cnt ;
}

int main() {
    int m, n;
    cin >> m >> n ;
    int a[m], b[n] ;
     for(int i = 0; i < m; i++) cin >> a[i] ;
     for(int i = 0; i < n; i++) cin >> b[i] ;
     cout << check(a,b,m,n) ;
    return 0;
}