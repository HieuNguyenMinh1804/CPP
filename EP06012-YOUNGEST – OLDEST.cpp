#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
struct  ql{
	string name, date;
};
ql a[102];
bool cmp(ql x, ql y){
	string namx = x.date.substr(6,4);
	string namy = y.date.substr(6,4);
	if(namx != namy) return namx < namy;
	string thangx = x.date.substr(3,2);
	string thangy = y.date.substr(3,2);
	if(thangx != thangy) return thangx < thangy;
	string ngayx = x.date.substr(0,2);
	string ngayy = y.date.substr(0,2);
	return ngayx < ngayy;
}
int main(){
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i].name >> a[i].date;
		if(a[i].date[2] != '/') a[i].date.insert(0,"0");
		if(a[i].date[5] != '/') a[i].date.insert(3,"0");
	}
	sort(a, a+n, cmp);
	cout << a[n-1].name << endl << a[0].name;
}
