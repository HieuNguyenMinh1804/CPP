#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t; cin.ignore();
	while(t--){
		string s1; getline(cin, s1);
		string s2; getline(cin, s2);
		set<string> v1;
		vector<string> v2;
		stringstream ss1(s1),ss2(s2);
		string tmp;
		while(ss2 >> tmp) v2.push_back(tmp);		
		while(ss1 >> tmp) v1.insert(tmp);
		while(v1.size()){
			int ok = 1;
			string x = *v1.begin();
			for(int i = 0; i < v2.size(); ++i){
				if(x == v2[i]){ok = 0;break;}
			}
			if(ok) cout << x << " ";
			v1.erase(x);
		}
		cout << endl;
	}
}
