#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	vector<int> v;
	int x = 1;
	while(v.size() <= 100){
		if(x%3 != 0 && x%10 != 3) v.push_back(x);
		x++;
	}
	int k; cin >> k; cout << v[k-1];
}
