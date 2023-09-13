#include <bits/stdc++.h>
using namespace std;

int main() {
   string s ;
  map<char, int > mp ;
  cin >> s ;
  for(int i = 0;i < s.length(); i++) mp[s[i]] ++ ;
  for(int i = 0; i < s.length(); i++){
    if(mp[s[i]] != 0) cout << s[i] << " " << mp[s[i]] << endl;
    mp[s[i]] = 0 ;
  }
}