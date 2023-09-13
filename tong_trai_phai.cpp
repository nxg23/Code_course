#include <iostream>
using namespace std;

int check(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int lSum = 0;
		for (int j = i; j >= 0; j--) {
			lSum += a[j];
		}
		int rSum = 0;
		for (int k = i; k < n; k++) {
			rSum += a[k];
		}
		if (lSum == rSum) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int N;
	cin >> N;
	int k = 0;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		int a[10000];
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < n; j++) {
			if (check(a,n)) {
				k = 1;
			}
		}
		if (k == 1) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}