#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std ;
	do {
		//这里我使用的vector<string>类型！
		vector<string> vs1{} , vs2{} , vs3{} ;
		string s1{} , s2{} ;
		cout << "Please enter a string" << endl ;
		while(cin >> s1 && s1 != "1")
			vs1.push_back(s1) ;
		cout << '\n' << "Please enter another string" << endl ;
		while(cin >> s2 && s2 != "1")
			vs2.push_back(s2) ;
		if (vs1.size() < vs2.size()) 
			vs3 = vs1 ;			
		else
		 	vs3 = vs2 ;
		for  (string s3 : vs3) {
			for(char c : s3)
			cout << c ;
		cout << ' ' ;
		}
		cout << endl ;
	} while (cin) ;
	return 0;
}
