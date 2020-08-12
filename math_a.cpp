#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n,a,b,i,j=0;
	
	cin>>n>>a>>b;
	
	if(a > b) {
		for(i=b; i<=n; i++) {
			if(i%b ==0 || i%a==0){
				j++;
			}
			
		}
	}else {
		for(i=a; i<=n; i++) {
			if(i%b ==0 || i%a==0){
				j++;
			}
		}
	}
	
	cout<<j<<endl;

	
}
