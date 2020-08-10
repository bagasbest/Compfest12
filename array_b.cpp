#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	
	cin>>n;
	
	int x[n],i;

	for(i=0; i<n; i++) {
		cin>>x[i];
	}
	
	for(i=n-1; i>=0; i--) {
		cout<<x[i]<<"\n";
	}
}
