#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[21][21], n;
int check(int a[21][21], int res){
	int oke = 0;
	for(int x = 0; x < n-res+1; ++x){
		for(int k = 0; k < n-res+1; ++k){// 0,1,2
			int dem = 0 ;
			for(int i = x+1; i <= res+x; ++i){
				for(int j = 1+k; j <= res+k; ++j){
					if(i == x+1 || i == res+x || j == k+1 || j == res+k){
						if(a[i][j]) dem++;
					}
				}
			}
			if(dem == 4*res-4) return 1;
		}
	}
	return 0;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				char c; cin >> c; a[i][j] = (c == 'X') ? 1 : 0;
			}
		}
		int res, ok = 0;
		for(res = n; res >= 1; --res){
			if(check(a,res)){ok = 1; break;}
		}
		if(ok) cout << res << endl;
		else cout << 0 << endl;
	}
}
