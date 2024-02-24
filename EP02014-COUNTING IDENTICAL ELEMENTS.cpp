#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int cnt[100005];
int a[101][101];
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		memset(cnt, 0 , sizeof(cnt));
		int n; cin >> n;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j) cin >> a[i][j];
		}
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j) if(cnt[a[i][j]] == i-1) cnt[a[i][j]] = i;
		}
		int res = 0;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				if(cnt[a[i][j]] == n){
					res ++;
					cnt[a[i][j]] -- ;
				}
			}
		}
		cout << res << endl;
	}
}