#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	
	int x[n], i;
	
	for(i=0; i<n; i++) {
		cin>>x[i];
	}
	
	for(i=0; i<n; i++) {
		 if (i < n-i-1) {
		 	if(i+1 == n-i-1) {
		 		cout<<x[i]<<" "<<x[n-i-1]<<endl;
		 		return 0;
			 }else {
			 	cout<<x[i]<<" "<<x[n-i-1]<<" ";
			 }
		 	
		 }else if(i == n-i-1) {
		 	cout<<x[i]<<endl;
		 	return 0;
		 }
	}
	
}
