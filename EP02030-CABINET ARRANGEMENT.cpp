#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int a[55][55];
int main(){
	fast();
	int n; cin >> n;
	int x = 0, dis;
	for(int i = 1; i <= n; ++i){
		x += i;
		dis = i;
		a[i][n] = x;
		for(int j = n-1; j >= i; --j){
			a[i][j] = a[i][j+1]+dis;
			dis++; 
		}
	}	
	for(int i = 1; i < n; ++i){
		dis = i;
		for(int j = i+1; j <= n; ++j){
			a[j][j-dis] = ++x;
		}

	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j) cout << a[i][j] <<" ";
		cout << endl;
	}
}
