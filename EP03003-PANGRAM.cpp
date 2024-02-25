#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		int cnt[257] = {};
		int start = (int)'a', end = (int)'z';
		for(int i = 0; i < s.size(); ++i) cnt[s[i]]++;
		for(int i = start; i <= end; ++i) if(!cnt[i]) k--;
		if(k >= 0) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
