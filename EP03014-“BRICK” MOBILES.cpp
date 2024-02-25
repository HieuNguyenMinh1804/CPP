#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
string a = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrTtUuVvWwXxYy";
char convert(char c){
	if(c == 'Z' || c == 'z') return '9';
	if(c == 'S' || c == 's') return '7';
	int res = 0;
	for(int i = 1; i < a.size(); ++i) if(c == a[i]) res = i;
	res = res/6+2;
	return res+'0';
}
int check(string s){
	int l = 0, r = s.size()-1;
	while(l < r){
		if(s[l] != s[r]) return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		for(int i = 0; i < s.size(); ++i){
			s[i] = convert(s[i]);
		}
		cout << s << endl;
		if(check(s)) cout <<"YES\n";
		else cout << "NO\n";
	}
}
