#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
double a[20][20], n, m;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j) cin >> a[i][j];
		}
		int idx = 1;
		for(int k = 1; k < n; ++k){		
			if(a[k][idx]){
				for(int i = k+1; i <= n; ++i){
					double x = a[i][idx]/a[k][idx];
					for(int j = 1; j <= m; ++j){
						a[i][j] = a[i][j] - x*a[k][j];
					}				
				}
				idx++;
			}
		}
		int res = 0;
		for(int i = 1; i <= n; ++i){
			int dem = 0;
			for(int j = 1; j <= m; ++j){
				if(!a[i][j]) dem ++;
			}
			if(dem == m) res ++;
		}
		cout << n-res << endl;
	}
}
