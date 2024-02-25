#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
struct data{
	int x1,x2,x3;
};
data a[5005];
bool cmp(data x, data y){
	if(x.x1 != y.x1) return x.x1 < y.x1;
	if(x.x2 != y.x2) return x.x2 < y.x2;
	return x.x3 < y.x3;
}
using namespace std;
int main(){
	fast();
	int n; cin >> n;
	for(int i = 0; i < n; ++i) cin >> a[i].x1 >> a[i].x2 >> a[i].x3;
	sort(a,a+n,cmp);
	for(int i = 0; i < n; ++i) cout << a[i].x1 << " " << a[i].x2 << " " << a[i].x3 << endl;
}
