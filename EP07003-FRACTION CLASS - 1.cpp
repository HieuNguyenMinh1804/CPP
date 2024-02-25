#include<bits/stdc++.h>
#define ll long long
using namespace std;
class PS{
	private:
		ll tu, mau;
	public:
		void nhap(){
			cin >> tu >> mau;
		}
		void in(){
			ll x = __gcd(tu, mau);
			tu /= x; mau /= x;
			cout << tu << "/" << mau;
		}
};

int main(){
	PS a;
	a.nhap();
	a.in();
}
