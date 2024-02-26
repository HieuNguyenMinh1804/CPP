#include<bits/stdc++.h>
#define ll long long
using namespace std;
int T;
ll lcm(ll a, ll b){ return a/__gcd(a,b)*b; }

struct Fraction{
	ll tu, mau;
};

void read_input(Fraction &A){
	cin >> A.tu >> A.mau;
}

void process(Fraction a, Fraction b){
	ll mc = lcm(a.mau, b.mau);	
	
	ll tc = a.tu*(mc/a.mau) + b.tu*(mc/b.mau);
	
	mc *= mc; tc *= tc;	
	
	ll x = __gcd(tc, mc);	
	
	mc /= x; tc /= x;	
	
	cout << tc << "/" << mc << " ";	
	
	ll d1 = a.tu * b.tu * tc;	
	
	ll d2 = a.mau * b.mau * mc;
	
	ll x1 = __gcd(d1,d2);	
	
	d1 /= x1; d2 /= x1;	
	
	if((d2 < 0) && (d1 > 0)) cout << "-" << d1 << "/" << abs(d2) << endl;	
	else if((d2 < 0) && (d1 < 0)) cout << abs(d1) << "/" << abs(d2) << endl;	
	else cout << d1 << "/" << d2 << endl;
}

int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}
