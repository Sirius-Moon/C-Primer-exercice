#include <iostream>

void exchange(int *&p1 , int *&p2) {
	int *p3 = NULL ;
	p3 = p1 ;
	p1 = p2 ;
	p2 = p3 ;
}

int main() {
	using namespace::std ;
	int i = 5 , j = 2 ;
	int *p1 =  &i , *p2 = &j ;
	cout << "*p1 = " << *p1 << ' ' 
	     << "*p2 = " << *p2 << endl ;
	exchange(p1 , p2) ;
	cout << "*p1 = " << *p1 << ' '
	     << "*p2 = " << *p2 << endl ;
	return 0 ;
}	
