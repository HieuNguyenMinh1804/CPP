#include<bits/stdc++.h>
using namespace std;
struct Employee{
	string ten, gt, ns, dc, ma, hd;
};
void input(struct Employee &A){
	getline(cin, A.ten);
	cin >> A.gt >> A.ns; 
	cin.ignore();
	getline(cin, A.dc);
	cin >> A.ma >> A.hd;
}
void print(Employee A){
	if(A.ns[2] != '/') A.ns.insert(0,"0");
	if(A.ns[5] != '/') A.ns.insert(3,"0");
	if(A.hd[2] != '/') A.hd.insert(0,"0");
	if(A.hd[5] != '/') A.hd.insert(3,"0");
	cout << "00001 "<< A.ten << " " << A.gt << " " << A.ns << " " << A.dc << " " << A.ma << " " << A.hd;
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
