#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
void solvemin(int n, int s){
	deque<int> q;
	int k = 9;
	while(1){
		if(s-k >= 1){
			q.push_front(k);
			s -= k; n--;
		}
		else k--;
		if(n == 1) break;
	}
	q.push_front(s);
    while(q.size()){
		cout << q.front(); 
		q.pop_front();
	}
}
void solvemax(int n, int s){
	queue<int> q;
	int k = 9;
	while(n > 0){
		if(s>=k){
			q.push(k);
			n--; s -= k;
		}
		else k--;
	}
	while(q.size()){cout << q.front(); q.pop();}
}
int main(){
	fast();
	int n, s; cin >> n >> s; // n cs co tong  = s
	if(s == 0 && n == 1) cout << "0 0";
	else if(s == 0 || n*9 < s) cout << "-1 -1";
	else {solvemin(n,s); cout << " "; solvemax(n,s);}
}