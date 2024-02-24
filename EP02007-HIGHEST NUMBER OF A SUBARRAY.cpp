#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		multiset <int> ms;
		for(int i = 0; i < k-1; ++i) ms.insert(a[i]);
		for(int i = k-1; i < n; ++i){
			ms.insert(a[i]);
			cout << *ms.rbegin() << " ";
			auto it = ms.find(a[i-k+1]);
			ms.erase(it);
		}
		cout << endl;
	}
}
