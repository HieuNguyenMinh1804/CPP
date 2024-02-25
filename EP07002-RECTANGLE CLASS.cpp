#include<bits/stdc++.h>
#define ll long long
using namespace std;
class hcn{
	private:
		ll x, y;
		string color;
	public:
		void nhap(){
			cin >> x >> y >> color;
		}
		void in(){
			if(x <= 0 || y <= 0){
				cout << "INVALID";
			}
			else{
				cout << (x+y)*2 << " " << x*y << " ";
				for(int i = 0; i < color.size(); ++i){
					if(i != 0 && color[i] >= 'A' && color[i] <= 'Z') color[i]+=32;
					else if(i == 0 && color[i] >= 'a' && color[i] <= 'z') color[i] -=32;
				}
				cout << color;
			}
		}
};
int main(){
	hcn a;
	a.nhap();
	a.in();
}
