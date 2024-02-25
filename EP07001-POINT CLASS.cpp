#include<bits/stdc++.h>
using namespace std;
class point{
	private:
		double x1, y1, x2, y2;
	public:
		void nhap(){
			cin >> x1 >> y1 >> x2 >> y2;
		}
		void in(){
			printf("%.4lf\n",sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
		}
};
int main(){
	int t; cin >> t;
	while(t--){
		point a;
		a.nhap();
		a.in();
	}
}
