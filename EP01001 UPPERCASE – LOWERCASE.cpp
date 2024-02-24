#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(c >= 'A' && c <= 'Z') c += 32;
		else c-= 32;
		cout << c << endl;
	}
}
