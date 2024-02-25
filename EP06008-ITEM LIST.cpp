#include<bits/stdc++.h>
using namespace std;
struct item{
	int id;
	string ten, loai;
	double nhap, ban, lai;
};
bool cmp(item A, item B){
	return A.lai > B.lai;
}
int main(){
	int n; cin >> n;
	cin.ignore();
	item a[n];
	for(int i = 0; i < n; ++i){
		a[i].id = i+1;
		getline(cin, a[i].ten);
		getline(cin,a[i].loai);
		cin >> a[i].nhap;
		cin >> a[i].ban;
		cin.ignore();
		a[i].lai = a[i].ban - a[i].nhap;
	}
	sort(a, a+n, cmp);
	for(int i = 0; i < n; ++i){
		cout << a[i].id << " " << a[i].ten << " " << a[i].loai << " ";
		printf("%.2lf\n",a[i].lai);
	}
}

