#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int money[10] = {1000,500,200,100,50,20,10,5,2,1};
	int t; cin >> t;
	while(t--){
		int n, res = 0; cin >> n;
		for(int i = 0; i < 10; ++i){
			int k = n/money[i];
			res += n/money[i];
			n -= k*money[i];
		}
		cout << res << endl;
	}
}
