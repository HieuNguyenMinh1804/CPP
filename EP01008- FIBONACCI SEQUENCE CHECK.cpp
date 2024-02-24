#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int fibo(int n){
	if(n ==0) return 1;
	int f1 = 0, f2 = 1, fn = 1;
	while(fn <= n){
		fn = f1+f2;
		f1 = f2; f2 = fn;
		if(n == fn) return 1;
	}
	return 0;
}
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i){
			if(fibo(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}
