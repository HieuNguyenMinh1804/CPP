#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int snt(int n){
	if(n <= 1) return 0;
	for(int i = 2; i <= sqrt(n); ++i) if(n%i == 0) return 0;
	return 1;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--)	{
		string s; cin >> s;
		int sum = 0;
		for(int i = 0; i < s.size(); ++i) sum +=(s[i]-'0');
		if(snt(sum)) cout << s << endl;
		else cout << -1 << endl;
	}
}
