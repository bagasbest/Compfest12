#include <bits/stdc++.h>
using namespace std;

int main () {
	int a,b,i,j;
	
	cin>>a>>b;
	
	int x[a][b];
	
	for(i=0; i<a; i++) {
		for(j=0; j<b; j++) {
			cin>>x[i][j];
		} 
	}
	
	for(i=0; i<b; i++) {
		for(j=0; j<a; j++) {
			
			if(j < a-1){
				cout<<x[j][i]<<" ";
			} else if (j == a-1){
				cout<<x[j][i];
			}
			
		} cout<<"\n";
	}
	
}
