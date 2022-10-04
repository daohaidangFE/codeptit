#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		a[i] = 0;
	}
	int tmp = 0;
	while(tmp <= pow(2,n)) {
		int k;
		for(int i = n - 1; i >= 0; i--) {
			if(a[i] == 0) {
				k = i;
				break;	
			}
		}
		for(int i = k; i < n; i++) {
			a[i] = 1 - a[i];
		}
		tmp++;
		for(int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
