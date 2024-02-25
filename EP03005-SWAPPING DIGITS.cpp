#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		int i = n-2;
		while(i >= 0 && s[i] <= s[i+1]) i--;
		if(i == -1) cout << -1 << endl;
		else{
			for(int j = n-1; j >= i+1; --j){
				if(s[j] < s[i] && s[j] != s[j-1]) {swap(s[i], s[j]); break;}
			}
			cout << s << endl;
		}
	}
}
