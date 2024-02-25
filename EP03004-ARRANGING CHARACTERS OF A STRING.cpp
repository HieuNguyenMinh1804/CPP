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
		int cnt[257] = {};
		for(int i = 0; i < s.size(); ++i) cnt[s[i]]++;
		int idx = max_element(cnt,cnt+257)-cnt;
		int maxi = cnt[idx];
		if(s.size()-maxi >= maxi-1) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
