#include<bits/stdc++.h>

using namespace std;


int main() {
    
 int T ;
 cin >> T ;
 while(T--){
    int m ;
    int n ;
     cin >> n ;
    map<int, int> mp ;
    while(n--){
        cin >> m ;
        mp[m] ++;
    }
    for(auto it : mp){
        if(mp[it.first] != 0 ) cout << it.first << " " << it.second << endl ;
        mp[it.first] = 0 ;
    }
 }

    return 0;
}

