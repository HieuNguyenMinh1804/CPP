#include<bits/stdc++.h>
using namespace std;
int  a[21], b[21], n;
set <string> s;
void Try(int i){
	for(int j = 0; j <= 1; ++j){
		b[i] = j;
		if(i == n-1){
			
			string p = "";
			vector<int> tmp;
			for(int idx = 0; idx < n; ++idx)
				if(b[idx]) tmp.push_back(a[idx]);
			if(tmp.size() >= 2){
				int ok = 1;
				for(int idx = 0 ; idx < tmp.size()-1; ++idx){
					if(tmp[idx] > tmp[idx+1]){
						ok = 0;
						break;
					}
				}
				if(ok){
					for(int idx = 0 ; idx < tmp.size(); ++idx){
						p += to_string(tmp[idx]);
						p += " ";
					}
					s.insert(p);
				}
			}		
		}
		else Try(i+1);
	}
}
int main(){
	freopen("SEQUENCE.in", "r", stdin);
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> a[i];
	Try(0);
	while(s.size()){
		string x = *s.begin();
		cout << x << endl;
		s.erase(x);
	}
}
