#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
void solve(){
	string s; cin >> s;
	if((s[s.size()-1]-'0') %2 == 1){cout <<"NO\n";return;}
	for(int i = 0; i < s.size(); ++i)
		if((s[i]-'0') %2 == 1){cout <<"NO\n";return;}
	cout << "YES\n";
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}
