#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[101][101];
int main(){
	fast();
	int n, m, k; cin >> n >> m >> k;
	for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) cin >> a[i][j];
	for(int i = 1; i <= n; ++i){
		for(int j = i+1; j <= n; ++j){
			if(a[i][k] > a[j][k]) swap(a[i][k], a[j][k]);
		}
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j) cout << a[i][j] << " ";
		cout << endl;
	}
}
