#include <iostream>
#include <string>

int main()
{
	using namespace::std ;
	string s ;
	cin >> s ; 
	for (auto &c : s)
		c = 'x' ;
	cout << s << endl ; 
	return 0 ;
}
