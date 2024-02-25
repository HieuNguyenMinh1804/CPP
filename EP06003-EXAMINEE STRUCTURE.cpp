#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
struct Examinee{
	string name, date;
	double sub1,sub2,sub3;
};
void input(Examinee &A){
	getline(cin, A.name);
	cin >> A.date;
	cin >> A.sub1 >> A.sub2 >> A.sub3;
}
void print(Examinee A){
	if(A.date[2] != '/') A.date.insert(0,"0");
	if(A.date[5] != '/') A.date.insert(3,"0");
	cout << A.name << " " << A.date <<" ";
	printf("%.1lf",A.sub1+A.sub2+A.sub3);
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
