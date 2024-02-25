#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	freopen("DATA.in", "r", stdin);
	string s;
	ll res = 0;
	while(cin >> s){
		int ok = 1;
		if(s.size() > 9) ok = 0;
		else if(s.size() == 9) if(s > "2147483647") ok = 0;
		ll add = 0;
		if(ok){			
			for(int i = 0; i < s.size(); ++i) 
				if(s[i] >= '0' && s[i] <= '9') add = add*10+(s[i]-'0');			
		}
		res += add;
	}
	cout << res;
}
