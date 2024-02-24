#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[101][101];
void solve(){
	int n; cin >> n;
	vector<int> vh; vector<int> vc;
	for(int i = 0; i < n; ++i)	{
		int sum1 = 0;
		for(int j = 0; j < n; ++j) cin >> a[i][j];
	}
	for(int i = 0; i < n; ++i){
		int sum2 = 0, sum1 = 0;
		for(int j = 0; j < n; ++j){
			sum1 += a[i][j];
			sum2 += a[j][i];
		}
		vh.push_back(sum1);
		vc.push_back(sum2);
	}
	int maxi = -1;
	for(int i = 0; i < n; ++i){
		maxi = max(maxi, vh[i]);
		maxi = max(maxi, vc[i]);
	}
	int addh = 0, addc = 0;
	for(int i = 0; i < n; ++i){
		addh += (maxi-vh[i]);
		addc += (maxi-vc[i]);
	}
	if(addh == addc){
		cout << addh << endl;
		return;
	}
	
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		solve();
	}
}
