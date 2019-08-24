#include <iostream>

void print1(const int *i , const int *p ) {
	std::cout << *i << ' ' << *p << ' ' << *(p+1) << std::endl ;
}

void print2(const int i , const int a[]) {
	std::cout << i << ' ' << a[0] << ' ' << a[1] << std::endl ;
}

void print3(const int &i , const int (&a)[2] ) {
	std::cout << i << ' ' << a[0] << ' ' << a[1] << std::endl ;
}

int main() {
	int i = 0 ;
	int j[2] = {1 , 2} ;
	print1(&i , j) ;
	print2(i , j) ;
	print3(i , j) ;
	return 0 ;
}
