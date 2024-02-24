#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int cnt[19] = {};
		string s; cin >> s;
		for(int i = 0; i < s.size()-2; ++i)
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') cnt[i] = cnt[i+1] = cnt[i+2] = 1;		
		for(int i = 0; i < s.size(); ++i)
			if(!cnt[i]) cout << s[i];
		cout << endl;
	}
}
