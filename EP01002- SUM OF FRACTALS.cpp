#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	ll res = 0, n; cin >> n;
	int ans = 1;
	for(int i = 1; i <= n; ++i){
		ans *=i;res += ans; 
	} 
	cout << res << endl;
}
