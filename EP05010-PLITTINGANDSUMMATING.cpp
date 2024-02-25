#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("DATA.in", "r", stdin);
	string s; cin >> s;
	while(s.size() > 1){
		int idx = s.size()/2;
		string tmp2 = s.substr(0,idx);
		string tmp1 = s.substr(idx,s.size()-idx);
		string res = "";
		int i = tmp1.size()-1;
		int j = tmp2.size()-1;
		int nho = 0;
		while(i >= 0 && j >= 0){
			int cong = (tmp1[i--]-'0') + (tmp2[j--]-'0') + nho;
			nho = cong / 10;
			res += (char)(cong%10 +'0');
		}
		while(i >= 0){
			int cong = (tmp1[i--]-'0') + nho;
			nho = cong / 10;
			res += (char)(cong%10 +'0');
		}
		if(nho == 1) res += "1";
		reverse(res.begin(), res.end());
		cout << res << endl;
		s = res;
	}
}