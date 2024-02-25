#include<bits/stdc++.h>
using namespace std;
struct Student{
	string ten, lop, ns;
	double gpa;
};
void input(Student A[], int n){
	cin.ignore();
	for(int i = 0; i < n; ++i){
		getline(cin, A[i].ten);
		cin >> A[i].lop >> A[i].ns >> A[i].gpa;
		cin.ignore();
	}
}
void print(Student A[], int n){
	for(int i = 0; i < n; ++i){
		cout << "B20DCCN";
		if(i+1 < 10) cout << "00" << i+1 << " ";
		else cout << "0" << i+1 <<" ";
		for(int j = 0; j < A[i].ten.size(); ++j) if(A[i].ten[j] >= 'A' && A[i].ten[j] <= 'Z') A[i].ten[j] += 32;
		stringstream ss(A[i].ten); string word;
		while(ss >> word){
			word[0] -= 32;
			cout << word[0];
			for(int j = 1; j < word.size(); ++j) cout << word[j];
			cout << " ";
		}
		if(A[i].ns[2] != '/') A[i].ns.insert(0,"0");
		if(A[i].ns[5] != '/') A[i].ns.insert(3,"0");
		cout << A[i].lop << " " << A[i].ns << " ";
		printf("%.2lf\n",A[i].gpa);
	}
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}
