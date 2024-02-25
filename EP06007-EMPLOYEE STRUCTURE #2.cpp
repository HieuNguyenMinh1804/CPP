#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
struct Employee{
	string ten, gt, ns, dc, num, date;
};
void input(Employee &A){
	cin.ignore();
	getline(cin , A.ten);
	cin >> A.gt >> A.ns;
	cin.ignore();
	getline(cin, A.dc);
	cin >> A.num >> A.date;
}
void printlist(Employee A[], int n){
	for(int i = 0; i < n; ++i){
		if(A[i].ns[2] != '/') A[i].ns.insert(0,"0");
		if(A[i].ns[5] != '/') A[i].ns.insert(3,"0");
		if(A[i].date[2] != '/') A[i].date.insert(0,"0");
		if(A[i].date[5] != '/') A[i].date.insert(3,"0");
		if(i+1 < 10) cout << "0000" << i+1 << " ";
		else cout << "000" << i+1 << " ";
		cout << A[i].ten <<" "<<A[i].gt << " " << A[i].ns << " " << A[i].dc << " " << A[i].num << " " << A[i].date;
		cout << endl;
	}
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
