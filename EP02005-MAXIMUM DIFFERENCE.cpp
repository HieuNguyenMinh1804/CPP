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
		int ans = -1;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < i; ++j){
				ans = max(ans, a[i]-a[j]);
			}
		}
		cout << ans << endl;
	}
}
