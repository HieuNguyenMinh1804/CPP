#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
ll mod;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s; cin >> s >> mod;
		ll ans = 0;
		for(ll i = 0; i < s.size(); ++i){
			ans = ans*10 + (s[i]-'0');
			ans %= mod;
		}
		cout << ans << endl;
	}
}