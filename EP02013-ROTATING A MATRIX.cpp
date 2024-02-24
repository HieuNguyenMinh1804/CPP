#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[105][105];
int b[105][105];
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j) 
				cin >> a[i][j];
		int l = 0, r = m-1, t = 0, bot = n-1, tmp1, tmp2;
		int x = min(n,m)/2;
		while(x--){
			for(int i = l; i <= r-1; ++i) b[t][i+1] = a[t][i];			
			for(int i = t; i <= bot-1; ++i) b[i+1][r] = a[i][r]; 			
			for(int i = r; i >= l+1; --i) b[bot][i-1] = a[bot][i];
			for(int i = bot; i >= t+1; --i) b[i-1][l] = a[i][l];
			l++;r--;t++;bot--;
		}
		if(n >= m && m%2 == 1) for(int i = l; i <= r; ++i) b[m/2][i] = a[m/2][i];		
		else if(m >= n && n%2 == 1) for(int i = t; i <= bot; ++i) b[i][n/2] = a[i][n/2];;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j) cout << b[i][j] <<" ";		
		cout << endl;
	}
}
