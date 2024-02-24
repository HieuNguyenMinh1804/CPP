#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	string key1 = "ABBADCCABDCCABD";
	string key2 = "ACCABCDDBBCDDBB";
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int res =15;
		if(n == 101){
			for(int i = 0; i < 15; ++i){
				char c; cin >> c;
				if(c != key1[i]) res --;
			}
		}
		else{
			for(int i = 0; i < 15; ++i){
				char c; cin >> c;
				if(c != key2[i]) res --;
			}
		}
		printf("%.2lf",(double)10*((double)res/15));
	}
}
