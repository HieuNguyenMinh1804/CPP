#include<bits/stdc++.h>
#define ll long long
using namespace std;
class nv{
	private:
		string ten, cv;
		ll luong, ngay;
	public:
		void nhap(){
			getline(cin, ten);
			cin >> luong >> ngay >> cv;
		}
		void in(){
			ll thuong = 0,ht = 150000;
			if(cv == "GD") ht = 250000 ;
			else if(cv == "PGD") ht = 200000 ;
			else if(cv == "TP") ht = 180000;
			if(ngay >= 25) thuong = 0.2*luong*ngay;
			else if(ngay >= 22 && ngay < 25) thuong = 0.1*luong*ngay;
			cout << "NV01 "<< ten <<" "<<luong*ngay <<" "<<thuong <<" "<<ht<<" "<<luong*ngay+thuong+ht;
		}
};
int main(){
	nv a;
	a.nhap();
	a.in();
}
