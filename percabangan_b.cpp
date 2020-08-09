#include <bits/stdc++.h>
using namespace std;

/*Simple Is-Numeric function in C++*/
bool is_digit(const char value) { return std::isdigit(value); }
bool is_numeric(const std::string& value) { return std::all_of(value.begin(), value.end(), is_digit); }

int main () { 
	string s;
	
	cin>>s;
	
	if(s[0] == '-' && s[1] != '0') {
		cout<<"bilangan bulat negatif"<<endl;
	}else if(s == "0"){
		cout<<"nol"<<endl;
	}else if(is_numeric(s) && s[0] != '0'){
		cout<<"bilangan bulat positif"<<endl;
	}else if(s[0] != '-' && !is_numeric(s)){
		cout<<"kata"<<endl;
	}
}
