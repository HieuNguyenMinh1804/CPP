#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		sort(a, a+n);
		int ans = 1e9;
		for(int i = 0; i < n-1; ++i){
			if(a[i+1]-a[i] < ans) ans = a[i+1]-a[i];
		}
		cout << ans << endl;
	}
}
