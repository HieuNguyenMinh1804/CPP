#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll h = 1, g = 0;
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			h *= a[i]; h %= mod;
			g = __gcd(1ll*g, 1ll*a[i]);
		}
		ll tmp = h;
		for(int i = 1; i < g; ++i){
			h *= tmp;
			h %= mod;
		}
		cout << h << endl;
	}
}