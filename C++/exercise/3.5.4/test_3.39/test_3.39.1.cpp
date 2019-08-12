#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace::std ;
	vector<char> s1 , s2 ;
	char c1 , c2 ;
	cout << "Please input a string" << endl ;
	while ( cin >> c1 && c1 != '1') { 
		s1.push_back(c1) ;
	}
	cout << "Please input anthor string" << endl ;
	while ( cin >> c2 && c2 != '1') {
		s2.push_back(c2) ;
	}
	if (s1 == s2) {
		for (auto &c : s1)
			cout << c << endl ;
		cout << endl ;
		return 0 ;
	}
	else 
		return -1 ;
}
