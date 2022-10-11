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
	string email;
	int tmp;
	for(int i = s.length() - 1; i >= 0; i--) {
		if(s[i] == ' ') {
			tmp = i;
			email = s.substr(i+1,s.length() - 1);
			break;
		}
	}
	email.push_back(s[0]);
	for(int i = 1; i < tmp; i++) {
		if(s[i] == ' ') {
			email.push_back(s[i+1]);
		}
	}
	cout << email << "@ptit.edu.vn";
	return 0;
}
