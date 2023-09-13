#include<bits/stdc++.h>

using namespace std;

int main() {
    
   int T;
   cin >> T ;
   while (T--){
   string s ;
   cin.ignore();
   getline(cin ,s) ;
   int l = s.length();
   set<char> se;
   for(int i = 0; i < l; i++){
    se.insert(tolower(s[i])) ;
   }
   if(se.size() == 26) cout <<"YES"<< endl ;
   else cout << "NO" << endl ;
   }   
    return 0;
}

