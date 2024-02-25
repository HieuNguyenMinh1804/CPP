#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string id, ten;
		double t,l,h;
	public:
		void nhap(){
			cin >> id;
			cin.ignore();
			getline(cin, ten);
			cin >> t >> l >> h;
		}
		void in(){
			double add;
			if(id[2] == '1') add = 0.5;
			else if(id[2] == '2') add = 1;
			else add = 2.5;
			cout << id <<" " << ten <<" " << add <<" "<< t*2+l+h << " ";
			if(t*2+l+h+add >=24) cout <<"PASSED\n";
			else cout << "FAILED\n";
		}
};
int main(){
	sv a;
	a.nhap();
	a.in();
}
