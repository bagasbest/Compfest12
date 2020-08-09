#include <bits/stdc++.h>
using namespace std;

int main () {
	
	long long a,b,c,x,s=0;
	
	cin>>a>>b>>c>>x;
	
	long long xx = x;
	
	if(s==0){
		x = (a*x+b) % c;
		s++;	
	}
	
	while (x != xx) {
		
		x = (a*x+b) % c;
		
		if(x <= c-1) {
			s++;
		} else {
			x = x - (c-1);
			s++;
		}
		
	}
	
	cout<<s<<endl;
	
	
}
