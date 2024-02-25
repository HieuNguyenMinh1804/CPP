#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int check(string s){
	int n = s.size();
	if(s.size() < 3) return 0;
	if(s[n-1] != 'y' || s[n-2] != 'p' || s[n-3] != '.') return 0;
	for(int i = 0; i < s.size(); ++i)
		if(s[i] != '.' && s[i] != '_' && s[i] < 'a' && s[i] > 'z') return 0;
	return 1;
}
int main(){
	fast();
	string s; getline(cin,s);
	for(int i = 0; i < s.size(); ++i) if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	if(check(s)) cout << "yes";
	else cout << "no";
}