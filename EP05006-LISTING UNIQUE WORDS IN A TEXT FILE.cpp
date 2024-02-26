#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	freopen("DOCUMENT.in", "r", stdin);
	map<string, int> mp;
	int k; cin >> k;
	string s;
	while(cin >> s){
	    for(int i = 0; i < s.size(); ++i) 
		if(s[i] >= 'A' && s[i] <= 'Z') s[i]+= 32;	
    	string check = ",.?!:;-/()";
    	while(s[s.size()-1] == ',' || s[s.size()-1] == '.' || s[s.size()-1] == '?' || s[s.size()-1] == '!' || s[s.size()-1] == ':' || s[s.size()-1] == ';' || s[s.size()-1] == '-' || s[s.size()-1] == '/' || s[s.size()-1] == '(' || s[s.size()-1] == ')')	
    		s.erase(s.size()-1 , 1);
    	while(s[0] == ',' || s[0] == '.' || s[0] == '?' || s[0] == '!' || s[0] == ':' || s[0] == ';' || s[0] == '-' || s[0] == '/' || s[0] == '(' || s[0] == ')')
    		s.erase(0 , 1);
    	int ok = 0;
    	for(int i = 0; i < s.size(); ++i) 
    		for(int j = 0; j < check.size(); ++j)
    			if(s[i] == check[j]) ok = 1;
    	if( !ok && s != "" ) mp[s]++;
    	else if(s != ""){
    		vector<int> pos;
    		for(int i = 0; i < s.size(); ++i) if(s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ':' || s[i] == ';' || s[i] == '-' || s[i] == '/' || s[i] == '(' || s[i] == ')') pos.push_back(i);
    		int st = 0;	
    		string tmp;
    		for(int i = 0; i < pos.size(); ++i){
    			tmp = s.substr(st, pos[i]-st);
    			if(tmp != "" ) mp[tmp]++;
    			st = pos[i]+1;
    		}
    		tmp = s.substr(st, s.size()-st);
    		if(tmp != "") mp[tmp]++;
    	}
	}		
	set<int> st;
	for(auto it:mp) st.insert(it.second);
	while(st.size()){
		int x = *st.rbegin();
		for(auto it:mp){		
			if(it.second == x){
				cout << it.first << " " << x << endl;
			}
		}
		st.erase(x);
	}
}
