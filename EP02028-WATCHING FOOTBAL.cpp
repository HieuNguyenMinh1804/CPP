#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	if(a[0]>15){
		cout << 15 ;return 0;
	}
	int idx = n;
	for(int i = 1; i < n; ++i){
		if(a[i]-a[i-1] > 15){
			idx = i; break;
		}
	}
	cout << min(90,a[idx-1]+15);
}
