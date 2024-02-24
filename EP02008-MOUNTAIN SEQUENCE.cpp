#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		int l, r; cin >> l >> r;
		while(a[l] <= a[l+1]) l++;
		while(l < r && a[l] >= a[l+1]) l++;
		if(l == r) cout << "Yes\n";
		else cout <<"No\n";
	}
}
