#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
ll mu(int n){
	ll res = 1;
	for(int i = 1; i < n; ++i) res *= 10;
	return res;
}
ll lcm(ll a, ll b) {return a/__gcd(a,b)*b;} 
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll x, y, z, n; cin >> x >> y >> z >> n;
		ll bcnn = lcm(x,lcm(y,z));
		ll tmp = mu(n);
		if(tmp%bcnn == 0) cout << tmp << endl;
		else{
			if((mu(n+1)-1) / bcnn == 0) cout << -1 << endl;
			else cout << (tmp/bcnn+1)*bcnn << endl;
		}
	}
}
