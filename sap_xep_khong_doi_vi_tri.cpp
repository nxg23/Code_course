#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100], b[100], k = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) 
            b[k++] = a[i]; 
    }
    sort(b, b+k);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) 
            a[i] = b[j++];
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}
