#include <bits/stdc++.h>
using namespace std;

int main () {
	int x[3];

	
	for(int i=0; i<3; i++) {
		cin>>x[i];
	}
	
	sort (x, x+3);
	
	int sum = 1, s=0;
	for(int i=0; i<3; i++) {
		if(sum < 3){
			s += x[i];
			sum++;
		} else {
			sum = x[i];
		}
	}
	
	
	if(s > sum) {
		cout<<"segitiga"<<endl;
	}else {
		cout<<"bukan segitiga"<<endl;
	}
	
	
}
