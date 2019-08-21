#include <iostream>

void exchange(int *p1 , int *p2) ;

int main() {
	using namespace::std ;
	int i1 = 1 , i2 = 2 ;
	exchange(&i1 , &i2) ;
	cout << i1 << ' ' << i2 << endl ;
	return 0 ;
}

void exchange(int *p1 , int *p2) {
	int i ;
	i = *p1 ;
	*p1 = *p2 ;
	*p2 = i ;
}
