#include <bits/stdc++.h>

using namespace std;

void lowercase(string &s) {
	for(int i = 0 ; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;
		}
	}
}

void uppercase(char &s) {
 	if(s >= 'a' && s <= 'z') {
 		s = s - 32;
	 }
}

void left_trim(string &s) {
	while(s[0] == ' ') {
		s = s.substr(1,s.length() - 1);
	}	
}

void right_trim(string &s) {
	while(s[s.length() - 1] == ' ') {
		s = s.substr(0,s.length() - 1); 
	}
}

void remove_doubleSpace(string &s) {
	int x = s.find("  ");
	while(x >= 0) {
		s = s.replace(x,2," ");
		x= s.find("  ");
	}
}


int main() {
	string s;
	getline(cin,s);
	left_trim(s);
	right_trim(s);
	remove_doubleSpace(s);
	lowercase(s);
	for(int i = 0; i < s.length(); i++) {
		if(i == 0) {
			uppercase(s[i]);
		}
		if(s[i] == ' ') {
			uppercase(s[i+1]);
		}
	}
	for(int i = s.length() - 1; i>= 0; i--) {
		if(s[i] == ' ') {
			s.replace(i,1,", ");
			break;
		}
		uppercase(s[i]);
	}
	cout << s;
	return 0;
}

