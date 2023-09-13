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
   set<string> se;
   stringstream ss(s);
   string tmp ;
   while(ss >> tmp) {
    se.insert(tmp) ;
   }
   cout << se.size() << endl;
   }   
    return 0;
}

