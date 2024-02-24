#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	for(int x = 1; x <= t; ++x){
		int n, m, k; cin >> n >> m >> k;
		int a[n], b[m];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < m; ++i) cin >> b[i];
		cout << "Test " << x <<":\n";
		for(int i = 0; i < k; ++i) cout << a[i] << " ";
		for(int i = 0; i < m; ++i) cout << b[i] << " ";
		for(int i = k; i < n; ++i) cout << a[i] << " ";
		cout << endl;
	}
}
