#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string ten, lop, ns;
		double gpa;
	public:
		void nhap(){
			getline(cin,ten);
			cin >> lop >> ns >> gpa;			
		}
		void in(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
			cout << "B20DCCN001 " << ten <<" "<< lop <<" "<< ns <<" ";
			printf("%.2lf",gpa);
		}
};
int main(){
	sv a;
	a.nhap();
	a.in();
}
