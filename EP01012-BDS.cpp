#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
ll lcm(ll a, ll b){return a/__gcd(a,b)*b;}
void solve(){
	ll x, y; cin >> x >> y;
	if(x < y) swap(x,y);
	ll tmp1 = lcm(x, y)/x, tmp2 = lcm(x, y)/y;
	while(tmp1 %2 == 0)  tmp1/=2;
	while(tmp1 % 3 == 0) tmp1/=3;
	while(tmp2 % 2 == 0) tmp2/=2;
	while(tmp2 % 3 == 0) tmp2/=3;
	if(tmp1 == 1 && tmp2 == 1)	cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}
