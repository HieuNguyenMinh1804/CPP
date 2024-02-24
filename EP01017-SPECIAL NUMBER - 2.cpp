#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
ll binpow(ll a, ll b){
	if(b == 0) return 1;
	ll ans = binpow(a, b/2);
	if(b %2 == 0) return ((ans%mod) * (ans%mod)) % mod;
	else return (((ans%mod) * (ans%mod)) % mod) * a % mod;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll n, k, res = 0; cin >> n >> k;
		deque<int> q;
		while(k){
			q.push_front(k%2);
			k /= 2;
		}
		ll mu = 0;
		while(q.size()){
			if(q.back()) res += q.back()*binpow(n,mu);
			res %= mod; mu++;
			q.pop_back();
		}
		cout << res << endl;
	}
}
