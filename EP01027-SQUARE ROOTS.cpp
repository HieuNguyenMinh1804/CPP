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
		double res = 0;
		for(int i = 1; i <= n; ++i){
			res = sqrt(res+i);
		}
		cout << fixed << setprecision(5) << res << endl;
	}
}
