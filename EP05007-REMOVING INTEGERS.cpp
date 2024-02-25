#include<bits/stdc++.h>
using namespace std;
multiset<string> ms;
void solve(string s){
	int ok = 0;
	for(int i = 0; i < s.size(); ++i){
		if(isalpha(s[i])) { ok = 1; break; }
	}
	if(ok) ms.insert(s);
	
	else{
		if(s.size() > 9)  ms.insert(s);
		else if(s.size() == 9 && s > "2147483647")  ms.insert(s);
	}
}
int main(){
	freopen("DATA.in","r",stdin);
	string s;
	while(cin >> s){
		solve(s);
	}
	while(ms.size()){
		auto it = ms.begin();
		cout << *it << " ";
		ms.erase(it);
	}
}
