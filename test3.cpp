#include <bits/stdc++.h>
using namespace std;

int main() {
   string s ;
  map<char, int > mp ;
  cin >> s ;
  for(int i = 0;i < s.length(); i++){
    mp[s[i]] ++ ;
  }
  for(auto it : mp){
    if(mp[it.first] != 0) cout << it.first << " " << it.second << endl;
    mp[it.first] = 0 ;
  }
}