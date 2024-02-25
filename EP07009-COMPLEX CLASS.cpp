#include<bits/stdc++.h>
using namespace std;
class sp{
	private:
		int thuc1, ao1, thuc2, ao2;
	public:
		void nhap(){
			cin >> thuc1 >> ao1 >> thuc2 >> ao2;
		}
		void in(){
			int thuc = thuc1+thuc2;
			int ao = ao1+ao2;
			cout << thuc*thuc1-ao*ao1;
			if(thuc*ao1+thuc1*ao > 0) cout << " + ";
			else if(thuc*ao1+thuc1*ao < 0) cout << " - ";
			cout << abs(thuc*ao1+thuc1*ao) <<"i";
			cout <<", " <<thuc*thuc-ao*ao;
			if(thuc*ao+thuc*ao > 0) cout << " + ";
			else if(thuc*ao+thuc*ao < 0) cout << " - ";
			cout << abs(thuc*ao+thuc*ao) << "i" << endl;
		}
};

int main(){
	int t; cin >> t;
	while(t--){
		sp a;
		a.nhap();
		a.in();
	}
}
