#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int countEven = 0;
		int countOdd = 0;
		char s = ' ';
		while(s != '\n') {
			int x;
			cin >> x;
			if(x % 2 == 0) {
				countEven++;
			} else {
				countOdd++;
			}
			s = getchar();	
		}
		int count = countEven + countOdd;
		if(count % 2 == 0 && countEven > countOdd || count % 2 != 0 && countEven < countOdd) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
