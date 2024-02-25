/*
code bi TLE
tham khao tai
https://github.com/QuanNM-PTIT/C_plus_plus_PTIT/blob/main/CPP0329%20-%20TH%C6%AF%C6%A0NG%20HAI%20S%E1%BB%90%20NGUY%C3%8AN%20L%E1%BB%9AN.cpp
*/
#include<bits/stdc++.h>
using namespace std;
string tru(string s1, string s2){
	string dif;
	int i = s1.size()-1;
	int j = s2.size()-1;
	int nho = 0;
	int tru;
	while(j >= 0){
		tru = (s1[i]-'0') - (s2[j]-'0'+nho);
		if(tru < 0){
			nho = 1;
			tru += 10;
			dif += (char)tru+'0';
		}
		else{
			dif += (char)tru+'0';
			nho = 0;
		}
		i--;j--;		
	}
	
	while(i >= 0){
		tru = (s1[i]-'0')-nho;
		if(tru < 0){
			nho = 1;
			tru += 10;
			dif += (char)tru+'0';
		}
		else{
			dif += (char)tru+'0';
			nho = 0;
		}
		i--;		
	}
	reverse(dif.begin(), dif.end());
	while(dif[0] == '0') dif.erase(0,1);
	return dif;
}

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

string nhan(string s1, string s2){
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
	return ans;
}

void solve(){
	string res = "0";
	string s1, s2;
	cin >> s1 >> s2;	
	if(s1.size() < s2.size()) {cout << 0 << endl; return;}
	else if(s1.size() == s2.size()){		
		if(s1 < s2) cout << 0 << endl;
		else{
			int dem = 0;
			while(s1 >= s2){				
				dem++;
				s1 = tru(s1,s2);				
			}
			cout << dem << endl;
		}
	}
	else{		
		while(s1.size() > s2.size()){
			int x = s1.size() - s2.size();
			int y;
			if(s1[0] < s2[0]){
				x--;
				y = (10*(s1[0]-'0')+(s1[1]-'0'))/(s2[0]-'0');
			}
			else y = (s1[0]-'0') /(s2[0]-'0');
			string tmp = to_string(y);			
			for(int i = 1; i <= x; ++i) tmp += "0";
			res = add(res,tmp);
			tmp = nhan(tmp, s2);
			s1 = tru(s1, tmp);			
		}
		int z = 0;
		while(s1 > s2){
			s1 = tru(s1,s2);
			z++;
		}
		res = add(res,to_string(z));
		cout << res << endl;
	}
	
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		solve();
	}
}