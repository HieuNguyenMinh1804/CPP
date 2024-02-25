#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s1,s2,add;
		cin >> s1 >> s2;
		if(s2.size() > s1.size()) swap(s1, s2);
		int i = s1.size()-1;
		int j = s2.size()-1;
		int nho=0;
		while(i>=0 && j>=0){
			int cong = (s1[i--]-'0') + (s2[j--]-'0') + nho;
			nho = cong/10;
			add += (char)(cong%10+'0');		
		}
		while(i>=0){
			int cong = (s1[i--]-'0') + nho;
			nho = cong/10;
			add += (char)(cong%10+'0');
		}
		if(nho==1) add += "1";
		for(int i = add.size()-1; i >= 0; --i) cout << add[i];
		cout << endl;
	}
}
