#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int check(int n){
	if(n <10 && n != 9) return 0;
	if(n == 9) return 1;
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(check(sum)) return 1;
	return 0;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
    	int sum  = 0;
    	for(int i = 0; i < s.size(); ++i) sum +=(s[i]-'0');
    	if(check(sum)) cout << 1 << endl;
    	else cout << 0 << endl;
	}
}