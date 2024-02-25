#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
struct Fraction{
	ll tu, mau;
};
void input(Fraction &A){
	cin >> A.tu >> A.mau;
}
void simplify(Fraction &A){
	ll k = __gcd(A.tu, A.mau);
	A.tu /= k;
	A.mau /= k;
}
void print(Fraction A){
	cout << A.tu << "/" << A.mau;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
