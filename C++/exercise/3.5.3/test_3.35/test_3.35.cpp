#include <iostream>

int main()
{
	using namespace::std ;
	int a[10] = {} ;
	int *p = a ;
	while ( p != end(a) )
		*(p++) = 0 ;
	for (auto i : a)
		cout << i << ' ' ;
	cout << endl ;
	return 0 ;
}
