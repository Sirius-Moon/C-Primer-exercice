#include <iostream>
#include <string>

int main ()
{
	using namespace::std ;
	const size_t arr = 20 ;
	char s1[arr] = {} ;
	char s2[arr] = {} ;
	char *p1 = s1 ;
	char *p2 = s2 ;
	cout << "Please input string 1" << endl ;
	while ( cin >> *p1 && *p1 != '1' ) {
		++p1 ;
	}
	cout << "Please input string 2" << endl ;
	while ( cin >> *p2 && *p2 != '1' ) {
		++p2 ;
	}
	p1 = s1 ;
	p2 = s2 ;
	while ( p1 != end(s1) && p2 != end(s2) ) { 
		if ( *p1 != *p2 ) {
			cout << "there are not same string" << endl ;
			break ;
		}
		++p1 ;
		++p2 ;
	}
	if ( *p1 == '\0' )
		cout << " this are same string " << endl ;
	
	return 0 ;
}
