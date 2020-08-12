#include <bits/stdc++.h>
using namespace std;

int main () {
	
	long long a,b;
	cin>>a>>b;
	
	long long gcd = __gcd(a,b);
	long long x = a*b;
	cout<<x/gcd<<endl;
	
	
	
}
