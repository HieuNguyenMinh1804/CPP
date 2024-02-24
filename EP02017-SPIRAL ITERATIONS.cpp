#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[101][101];
void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<int> v;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j) cin >> a[i][j];
	}
	int x = 0;
	int l = 0, r = m-1, t = 0, b = n-1;
	while(l <= r && t <= b){
		for(int i = l; i <= r; ++i) v.push_back(a[t][i]);
		t++;
		for(int i = t; i <= b; ++i) v.push_back(a[i][r]);
		r--;
		if(l > r || t > b || x > 100) break;
		for(int i = r; i >= l;--i) v.push_back(a[b][i]);
		b--;
		for(int i = b; i >= t; --i) v.push_back(a[i][l]);
		l++;
		x += 4;
	}
	cout << v[k-1] << endl;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}