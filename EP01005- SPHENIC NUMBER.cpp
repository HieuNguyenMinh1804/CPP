#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
void solve(){
	int n; cin >> n; int cnt = 0;
	for(int i = 2; i <= sqrt(n); ++i)	{
		if(n%i == 0){
			cnt ++; int dem = 0;
			while(n%i == 0){
				n /= i;
				dem ++;
			}
			if(dem >= 2){
				cout << 0 << endl;
				return;
			}
		}
	} if(n != 1) cnt ++;
	if(cnt != 3){
		cout << 0 << endl; return;
	}
	else cout << 1 << endl;
}
int main(){
	fast();
	int t; cin >>  t;
	while(t--){
		solve();
	}
}
