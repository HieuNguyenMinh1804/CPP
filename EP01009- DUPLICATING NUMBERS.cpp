#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll a, x, y; cin >> a >> x >> y;
		int tmp = __gcd(x,y);
		for(int i = 1; i <= tmp; ++i) cout << a;
		cout << endl;
	}
}