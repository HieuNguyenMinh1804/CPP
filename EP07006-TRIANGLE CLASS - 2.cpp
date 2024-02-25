#include<bits/stdc++.h>
#define PI 3.141592653589793238
#define endl "\n"
using namespace std;
void solve(){
	double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	double b = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	double c = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	if(a+b <= c || a+c <= b || b+c <= a){cout <<"INVALID\n"; return;}
	double p = (a+b+c)/2;
	double S = sqrt((p-a)*(p-b)*(p-c)*p);
	printf("%.3lf\n",S);
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}