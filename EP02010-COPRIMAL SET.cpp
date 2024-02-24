#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
void solve(){
	ll n, m; cin >> n >> m;
	ll sum = (n+1)*n/2;
	ll x1 = (sum+m)/2, x2 = (sum-m)/2;
	if(__gcd(x1,x2) != 1 || sum <= m || (sum+m)%2 == 1){
		cout << "No\n";
		return;
	}
	cout << "Yes\n";
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}