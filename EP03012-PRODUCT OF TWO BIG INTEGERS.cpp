#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
string product(string s, int x){
	string res = "";
	int i = s.size()-1, remember = 0;
	while(i >= 0){
		int nhan = (s[i--]-'0')*x + remember;
		remember = nhan / 10;
		res += char(nhan%10+'0');
	}
	if(remember != 0) res += char(remember+'0');
	reverse(res.begin(), res.end());
	return res;
}
string add(string s1, string s2){
	if(s2.size() > s1.size()) swap(s1, s2);
	int i = s1.size()-1;
	int j = s2.size()-1;
	int nho = 0;
	string add = "";	
	while(i >= 0 && j >= 0){
		int cong = (s1[i--]-'0') + (s2[j--]-'0') + nho;
		nho = cong / 10;
		char c = (cong%10+'0');
		add += c;		
	}
	while(i>=0){
		int cong = (s1[i--]-'0') + nho;
		nho = cong/10;
		add += (char)(cong%10+'0');
	}
	if(nho==1) add += "1";
	reverse(add.begin(), add.end());
	return add;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		if(s2.size() > s1.size()) swap(s1,s2);
		queue<string> q;
		for(int k = s2.size()-1; k >= 0; --k){
			int x = s2[k]-'0';
			string p;
			if(x != 0){
				p = product(s1,x);
				for(int i = 1; i <= s2.size()-k-1; ++i) p += "0";
				q.push(p);	
			}			
		}
		string ans = q.front(); q.pop();
		while(q.size()){
			ans = add(ans,q.front());
			q.pop();
		}
		cout << ans << endl;
	}
}
