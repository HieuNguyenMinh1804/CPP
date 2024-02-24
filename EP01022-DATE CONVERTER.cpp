#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int n; cin >> n;
	cout << n/365 << " ";
	n-= n/365*365;
	cout << n/7 << " ";
	n-= n/7*7;
	cout << n;
}
