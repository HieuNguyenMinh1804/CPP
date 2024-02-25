#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string ten, ns;
		double m1, m2, m3;
	public:
		void nhap(){
			getline(cin, ten);
			getline(cin, ns);
			cin >> m1 >> m2 >> m3;
		}
		void in(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
			cout << ten <<" "<< ns ;
			printf(" %.1lf",m1+m2+m3);
		}
};
int main(){
	sv a;
	a.nhap();
	a.in();
}
