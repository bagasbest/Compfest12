#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n,i;
	cin>>n;
	
	long long x[n];
	
	for(i=0; i<n;i++){
		cin>>x[i];
	}
	
	sort(x,x+n);
	
	for(i=0; i<n; i++){
		if(i==n-1){
			cout<<x[i]<<endl;
		}
	}
	
	
	
	
}
