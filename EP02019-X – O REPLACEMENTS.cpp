#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int a[21][21], used[21][21];
int n, m, check; 
void loang(int i, int j){
	a[i][j] = 1;
	for(int k = 0; k < 4; ++k){
		int i1 = i+dx[k];
		int j1 = j+dy[k];
		if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == 0) loang(i1,j1);
	}
}
void loang1(int i, int j){
	if(i == 0 || i == n-1 || j == 0 || j == m-1) check = 0;
	if(check == 0) return;
	used[i][j] = 1;
	for(int k = 0; k < 4; ++k){
		int i1 = i+dx[k];
		int j1 = j+dy[k];	
		if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == 0 && used[i1][j1] == 0){
			loang1(i1,j1);
		}
	}
}
int main(){
	fast(); 
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				char c; cin >> c;
				a[i][j] = (c == 'X') ? 1 : 0;
			}
		}
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(!a[i][j]){
					memset(used, 0 ,sizeof(used));
					check = 1; loang1(i,j);
					if(check) loang(i,j);
				}
			}			
		}
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(a[i][j]) cout << "X ";
				else cout << "O ";
			}
			cout << endl;
		}
	}
}