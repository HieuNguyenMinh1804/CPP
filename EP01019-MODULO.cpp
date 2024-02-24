#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	ll a[4]; for(int i = 0; i < 4; ++i) cin >> a[i];
	sort(a, a+4);
	for(int i = 1; i < 4; ++i) a[i] -= a[0];
	cout << __gcd(a[1],__gcd(a[2],a[3]));
}
