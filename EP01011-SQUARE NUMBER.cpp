#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int a, b; cin >> a >> b;
	int x1 = sqrt(a), x2 = sqrt(b);
	if(x1*x1 != a) x1 +=1; 
	ll res = 0;
	for(int i = x1; i <= x2; ++i) res += i*i;
	cout << res;
}
