#include <iostream>
#include <string>

int main()
{
	using namespace::std ;
	string s ;
	cin >> s ;
	decltype(s.size()) i = 0 ;
	while (i != s.size()) {
		s[i] = 'x';
		++i ;
	}
	cout << s << endl ; 
	return 0 ;
}
