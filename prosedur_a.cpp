#include <bits/stdc++.h>
using namespace std;

void cekUrutan (int n) {
	
	int x[n];
	
	for(int i=0; i<n; i++) {
		cin>>x[i];
	}
	
	int temp;
	
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(x[i] > x[j]) {
				swap(x[i], x[j]);
				
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
}

int main ()  {
	int n;
	cin>>n;
	
	
	
	cekUrutan(n);
	
	
}
