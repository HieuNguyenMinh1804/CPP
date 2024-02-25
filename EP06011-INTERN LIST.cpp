#include<bits/stdc++.h>
using namespace std;
struct intern{
	int id;
	string ma, ten, lop, mail, cty;
};
intern a[100];
bool cmp (intern x, intern y){
	return x.ma < y.ma;
}
int main(){
	int n; cin >> n; 
	for(int i = 0; i < n; ++i) a[i].id = i+1;
	for(int i = 0; i < n; ++i){
		cin >> a[i].ma ;
		scanf("\n");
		getline(cin, a[i].ten);
		cin >> a[i].lop ;
		cin >> a[i].mail ;
		cin>> a[i].cty;
	}
	sort(a, a+n, cmp);
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		for(int i = 0; i < n; ++i){
			if(a[i].cty == s){
				cout << a[i].id << " " << a[i].ma << " " << a[i].ten <<" "<< a[i].lop << " " << a[i].mail << " " << a[i].cty << endl;
			}
		}
	}
}
