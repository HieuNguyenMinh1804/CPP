#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	float a ;
	cin >> a;
	string c; cin >> c;
	float b ; cin >> b;
	if(c == "+") cout << fixed << setprecision(2) << a+b;
	else if(c == "-") cout << fixed << setprecision(2) << a-b;
	else if(c == "/") cout << fixed << setprecision(2) << a/b;
	else cout << fixed << setprecision(2) << a*b;
}