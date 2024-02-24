#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		while(n >9){
			int s = 0;
			while(n){
				s += n%10;
				n/=10;
			}
			n = s;
		}
		cout << n << endl;
	}
}
