#include<bits/stdc++.h>
using namespace std;
class empl{
	private:
		string ten, gt, ns, dc, num, date;
	public:
		void nhap(){
			getline(cin , ten);
			cin >> gt >> ns;
			cin.ignore();
			getline(cin, dc);
			cin >> num >> date;
		}
		void in(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
			if(date[2] != '/') date.insert(0,"0");
			if( date[5] != '/')  date.insert(3,"0");
			cout <<"00001 "<< ten <<" "<< gt << " " <<  ns << " " <<  dc << " " <<  num << " " <<  date;
		}
};
int main(){
	empl a;
	a.nhap();
	a.in();
}
