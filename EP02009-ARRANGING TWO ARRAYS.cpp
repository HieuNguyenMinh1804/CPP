#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int cnt[100005] = {};
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			cnt[a[i]]++;
		}
		for(int i = 0; i < m; ++i) cin >> b[i];
		for(int i = 0; i < m; ++i){
			int maxi = cnt[b[i]];
			for(int j = 1; j <= maxi; ++j){
				cout << b[i] << " ";
				cnt[b[i]] --;
			}
		}
		multiset<int> ms;
		for(int i = 0; i < n; ++i)
			if(cnt[a[i]]) ms.insert(a[i]);
		while(ms.size()){
			cout << *ms.begin() << " ";
			auto it = ms.find(*ms.begin());
			ms.erase(it);
		}
		cout << endl;
	}
}
