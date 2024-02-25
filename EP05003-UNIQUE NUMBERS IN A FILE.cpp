#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	freopen("DATA.in", "r", stdin);
	int n; int cnt[1005] = {};
	while(cin >> n)cnt[n]++;
	for(int i = 0; i <= 1000; ++i) if(cnt[i]) cout << i << " " << cnt[i] << endl;
}
