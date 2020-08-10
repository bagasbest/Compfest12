#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n,i,j,s=0;
	
	cin>>n;
	long long x[n][n];
	
	
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			cin>>x[i][j];
			if(i==j) {
				s += x[i][j];
			}
		}
	}
	
	cout<<s<<endl;
	
}

