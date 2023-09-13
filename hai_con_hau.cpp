#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;

int x[MAX], y[MAX];

bool check(int i, int j)
{
    if (x[i] == x[j] || y[i] == y[j])
        return true;

    if (abs(x[i] - x[j]) == abs(y[i] - y[j]))
        return true;

    return false;
}

int main()
{
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (check(i,j))
            {
                cout << "yes\n";
                return 0;
            }

    cout << "no\n"; 
    return 0;
}
