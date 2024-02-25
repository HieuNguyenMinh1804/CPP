#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b){
	return a/__gcd(a,b)*b;
}
struct Fraction{
	int tu, mau;
};
void read_input(Fraction &A){
	cin >> A.tu >> A.mau;
}
void process(Fraction a, Fraction b){
	int mc = lcm(a.mau, b.mau);
	int tc = a.tu*(mc/a.mau) + b.tu*(mc/b.mau);
	mc *= mc; tc *= tc;
	int x = __gcd(tc, mc);
	mc /= x; tc /= x;
	cout << tc << "/" << mc << " ";
	int d1 = a.tu*b.tu*tc;
	int d2 = a.mau*b.mau*mc;
	int x1 = __gcd(d1,d2);
	cout << d1/x1 << "/" << d2/x1 << endl;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}
