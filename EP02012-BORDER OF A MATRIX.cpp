#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				int x; cin >> x;
				if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << x << " ";
				else cout << " ";
			}
			cout << endl;
		}
	}
}
