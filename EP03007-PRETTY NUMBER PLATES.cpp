#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int check1(string s){
	for(int i = 1; i < s.size(); ++i) if(s[i] <= s[i-1]) return 0;
	return 1;
}
int check2(string s){
	for(int i = 1; i < s.size(); ++i) if(s[i] != s[0]) return 0;
	return 1;
}
int check3(string s){
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1;
	return 0;
}
int check4(string s){
	for(int i = 0; i < s.size(); ++i) if(s[i] != '8' && s[i] != '6') return 0;
	return 1;
}
int main(){
	fast();
	int t; cin >> t; cin.ignore();
	while(t--){
		string k; getline(cin, k);
		string s;
		for(int i = 5; i <= 10; ++i)
			if(isdigit(k[i])) s += k[i];
		if(check1(s) || check2(s) || check3(s) || check4(s)) cout << "YES\n";
		else cout << "NO\n";
		
	}
}
