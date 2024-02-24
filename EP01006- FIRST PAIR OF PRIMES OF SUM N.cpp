#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int snt(int n){
	if(n <= 1) return 0;
	int k = sqrt(n);
	for(int i = 2; i <= k; ++i){
		if(n %i == 0) return 0;
	} return 1;
}
void solve(){
	int n; cin >> n;
	for(int i = 2; i <= n/2; ++i){
		if(snt(i) && snt(n-i)){
			cout << i << " " << n-i << endl;
			return;
		}
	}
	cout << -1 << endl;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}
