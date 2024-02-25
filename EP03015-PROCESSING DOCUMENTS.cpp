#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<string> q;
	string s; 
	while(cin >> s){
		for(int i = 0; i < s.size(); ++i) if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		q.push(s);
	}
	int check = 1;
	while(q.size()){
		string s1 = q.front();
		if(check) s1[0] -= 32;
		check = 0;
		if(s1[s1.size()-1] == '.' || s1[s1.size()-1] == '?' || s1[s1.size()-1] == '!'){
			for(int i = 0; i < s1.size()-1; ++i) cout << s1[i]; cout << " ";
			check = 1;	
			cout << endl;
		}	
		else cout << s1 << " ";
		q.pop();
	}
}
