#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int n; cin >> n;
	ll res = 0;
	map<ll, ll> m;
	m[0] = 1; m[2] = 1;
	for(int i = 4; i <= n; i += 2){
		for(int j = 2; j <= i; j+=2){
			m[i] += m[i-j]*m[j-2];
			m[i] %= mod;
		}
	}
	cout << m[n];
}
