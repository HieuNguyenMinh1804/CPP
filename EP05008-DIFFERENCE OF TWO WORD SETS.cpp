#include <bits/stdc++.h>
using namespace std;
string conv(string s){
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    return s;
}
int main(){
	string s;
	map <string,int> m1, m2;
	ifstream input1,input2;
    input1.open("DATA1.in");
    while(input1 >> s){
        s = conv(s);
        m1[s] = 1;
    }
    input1.close();
    input2.open("DATA2.in");
    while(input2 >> s){
        s = conv(s);
        m2[s] = 1;
    }
    input2.close();
    for(auto it:m1) if(!m2[it.first]) cout << it.first << " "; cout << endl;
    for(auto it:m2) if(!m1[it.first]) cout << it.first << " ";
}
