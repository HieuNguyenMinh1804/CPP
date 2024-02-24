#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		ll n, s = 0; cin >> n;
		ll tmp = n;
		while(tmp){
			s += tmp%10;
			tmp /= 10;
		}
		tmp = n;
		while(__gcd(tmp, s) == 1){
			n += 1;
			tmp = n;
			s = 0;
			while(tmp){
				s += tmp%10;
				tmp /= 10;
			}
			tmp = n;
		}
		cout << n << endl;
	}
}
