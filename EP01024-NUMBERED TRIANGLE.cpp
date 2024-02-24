#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int n; cin >> n;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= 2*i-1; ++j) cout << j;
		cout << endl;
	}
}
