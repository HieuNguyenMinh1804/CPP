#include<bits/stdc++.h>
using namespace std;
struct p{
	double x, y;	
};
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		p a[n];
		for(int i = 0; i < n; ++i) cin >> a[i].x >> a[i].y;
		double res1 = 0, res2 = 0;
		for(int i = 0; i < n-1; ++i) res1 += a[i].x*a[i+1].y;
		res1 += a[n-1].x*a[0].y;		
		for(int i = 0; i < n-1; ++i) res2 += a[i].y*a[i+1].x;
		res2 += a[n-1].y*a[0].x;
		printf("%.3lf\n",0.5*abs(res1-res2));
	}
}
