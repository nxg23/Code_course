#include<bits/stdc++.h>

using namespace std;

int main() {
  string S; 
  cin >> S;
  string word; 
  int n = S.length(); 
  vector<string> v ;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      word = "";
      word += S[i];
      word += S[j];
      v.push_back(word) ;
        for (int k = 0; k < n; k++) {
          word += S[k];
          v.push_back(word) ;
            word.erase(word.length() - 1);
        }
    }
  }

int N = v.size() ;
  for (int i = 0; i < N; i++) {
    cout << v[i] <<" ";
  }

  return 0;
}