#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll a, ll b){return a/__gcd(a,b)*b;}
class PS{
	private:
		ll tu1, mau1, tu2, mau2;
	public:
		void nhap(){
			cin >> tu1 >> mau1 >> tu2 >> mau2;
		}
		void in(){
			ll mc = lcm(mau1, mau2);
			ll tc = tu1*(mc/mau1) + tu2*(mc/mau2);
			ll x = __gcd(mc, tc);
			cout << tc/x << "/" << mc/x;
		}
};

int main(){
	PS x;
	x.nhap();
	x.in();
}
