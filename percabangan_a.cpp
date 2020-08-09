#include <bits/stdc++.h>
using namespace std;

int main () {
	int a,b;
	char op;
	long long sum;
	
	
	cin>>a>>op>>b;
	
	if(op == '+') {
		sum = a + b;
	}else if(op == '-') {
		sum = a - b;
	}else if(op == '*'){
		sum = a*b;
	} else if(op == '/'){
		sum = a/b;
	}else {
	
		sum = a%b;
	}
	
	cout<<sum<<endl;
	
	
}
