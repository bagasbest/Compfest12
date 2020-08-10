#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	string s;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		
		cin>>s;
		
		int x = s.length();
		
		for(int j=0; j<x; j++) {
			if(s[j] != s[x-j-1]){
				cout<<"bukan palindrom"<<endl;
				break;
			}else if(s[j] == s[x-j-1] && j+1 == x-j-1) {
				cout<<"palindrom"<<endl;
				break;
			}else if (s[j] == s[x-j-1] && j == x-j-1){
				cout<<"palindrom"<<endl;
				break;
			}
		}
		
	}
}
