#include<bits/stdc++.h>
#define ll long long
using namespace std;
class gv{
	private:
		string ma, ten;
		ll luong;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin,ten);
			cin >> luong;
		}
		void in(){
			ll ht = 500000;
			string tmp = ma.substr(0,2);
			if(tmp =="HT") ht = 2000000;
			else if(tmp=="HP") ht = 900000;
			string tmp1 = ma.substr(2,2);
			int hs = stoi(tmp1);
			cout << ma << " " << ten <<" "<<hs <<" "<<ht <<" "<<luong*hs+ht;
		}
};

int main(){
	gv a;
	a.nhap();
	a.in();
}
