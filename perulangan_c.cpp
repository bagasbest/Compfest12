#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n,m,l,i,j;
	
	cin>>n>>m>>l;
	
	
	for(i=0; i<n; i++){
		
		if(i <= l-1 || i >= n-l){
			for(j=0; j<m; j++) {
				cout<<"*";	
			}cout<<"\n";	
		}else {
			for(j=0; j<m; j++){
				if(j<=l-1){
					cout<<"*";
				}else {
					cout<<".";
				}
			}cout<<"\n";
		}
		
	}
	
	
}
