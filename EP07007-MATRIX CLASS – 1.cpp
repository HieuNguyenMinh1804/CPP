#include<bits/stdc++.h>
using namespace std;
int a[60][60], b[60][60], c[60][60];
int main(){
	int t; cin >> t;
	while(t--){
		int hang, cot; cin >> hang >> cot;
		for(int i = 0; i < hang; ++i){
			for(int j = 0; j < cot; ++j){
				cin >> a[i][j];
				b[j][i] = a[i][j];
			}
		}
		for(int i = 0; i < hang; ++i){
			for(int j = 0; j < hang ; ++j){
				c[i][j] = 0;
				for(int k = 0; k < cot ; ++k){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for(int i = 0; i < hang; ++i){
			for(int j = 0; j < hang ; ++j){
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	}
}