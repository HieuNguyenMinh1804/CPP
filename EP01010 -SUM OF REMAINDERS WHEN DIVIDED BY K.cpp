#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll q = n/k, r = n%k, res = (k-1+1)*(k-1)/2*q;
		for(int i = 1; i <= r; ++i) res += i;
		if(res == k) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
