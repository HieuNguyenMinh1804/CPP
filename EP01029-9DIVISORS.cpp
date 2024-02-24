#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
bool snt(int n){
	for(int i = 2; i <= sqrt(n); ++i){
		if(n%i == 0) return false;
	}
	return n > 1;
}
int check1(int n){
	int cnt = 0;
	int a = sqrt(sqrt(n));
	if(n == a*a*a*a && snt(a)) return 1;
	return 0;
}
int check2(int n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); ++i){
		if(n%i == 0){
			cnt ++; int dem = 0;
			while(n%i == 0){
				n /= i;
				dem ++;
			}
			if(dem != 1) return 0;			
		}
	} if(n != 1) cnt ++;
	if(cnt != 2) return 0;
	return 1;
}
int main(){
	fast();
	int n; cin >> n;
	int x = sqrt(n);
	int dem = 0;
	for(int i = 6; i <= x; ++i)
		if(check1(i) || check2(i)) dem++;
	cout << dem ;
}
