#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll n, x, ans = 0, tmp = 1; cin >> n >> x;
		ll a[n];
		for(int i = n-1; i >= 0; --i) cin >> a[i];
		for(int i = 0; i < n; ++i){
			ans += (a[i]*tmp);
			ans %= mod;
			tmp *= x;
			tmp %= mod;
		}
		cout << ans << endl;
	}
}