#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int check(string s){
	int cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '0'){
			cnt0++;
			cnt1 = 0;
		}
		else{
			cnt1 ++;
			cnt0 = 0;
		}
		if(cnt1 >= 7 || cnt0 >= 7) return 0;
	}
	return 1;
}
int main(){
	fast();
	string s; cin >> s;
	if(check(s)) cout << "NO";
	else cout << "YES";
}
