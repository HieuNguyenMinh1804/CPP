#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
struct Student{
	string ten, lop, ns, id;
	double gpa;
};
void input(Student &A){
	A.id = "B20DCCN001";
	getline(cin, A.ten);
	cin >> A.lop >> A.ns >> A.gpa;
}
void print(Student A){
	if(A.ns[2] != '/') A.ns.insert(0,"0");
	if(A.ns[5] != '/') A.ns.insert(3,"0");
	cout << A.id << " " << A.ten << " " << A.lop << " " << A.ns << " ";
	printf("%.2lf",A.gpa);
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}
