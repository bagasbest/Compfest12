#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n,k,i,j, s=0;
	
	cin>>n>>k;
	
	long long x[k];
	
	if(k==0) {
		for(i=0; i<n; i++) {
			
			if(i+1 < n) {
				cout<<i+1<<" ";
			} else{
				cout<<i+1<<endl;
				return 0;
			}
			
		}
	}
	
	
	for(j=0; j<k; j++) {
		cin>>x[j];
	}
	
	sort(x, x+k);
	
	int sum = 1;
	
	for(i=0; i<n; i++) {
		
		for(j=s; j<k; j++) 
		{
			//cout<<i+1<<"=="<<x[j]<<" ";
			if(x[j] == i+1){
				s++;
				break;
				
			}else if (x[j] != i+1 && j+1 == k){
				
				if(sum == 1) {
					cout<<i+1;
					sum--;
					break;
					
				}else if(sum == 0) {
					cout<<" "<<i+1;
					break;
				}		
			}
		}
		
		if(i+1 > j && j == k && i+1 < n) {
				if(sum == 1){
					cout<<i+1;
					sum--;
					
				}else if(sum == 0) {
					cout<<" "<<i+1;
					
				}
		}else if(i+1 > j && j == k && i+1 == n) {
			cout<<" "<<i+1;
			
		}
	}
	
	cout<<endl;
}
