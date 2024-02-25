#include<bits/stdc++.h>
using namespace std;
struct sv{
	string id, ten, lop;
	double mon1, mon2, mon3;	
};
bool cmp(sv x, sv y){
	if(x.ten != y.ten) return x.ten < y.ten;
	return x.id < y.id;
}
int main(){
	int n; cin >> n;
	sv a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i].id;
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop;
		cin >> a[i].mon1 >> a[i].mon2 >> a[i].mon3;
	}
	sort(a, a+n, cmp);
//	for(int i = 0; i < n; ++i){
//		for(int j = i+1; j < n; ++j) if(a[i].ten > a[j].ten) swap(a[i], a[j]);
//	}
	for(int i = 0; i < n; ++i){
		cout << i+1 <<" "<< a[i].id <<" "<<a[i].ten <<" "<< a[i].lop;
		printf(" %.1lf %.1lf %.1lf\n",a[i].mon1, a[i].mon2, a[i].mon3);
	}
}