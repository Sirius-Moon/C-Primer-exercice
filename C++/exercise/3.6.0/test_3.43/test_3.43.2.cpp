#include <iostream>

int main() {
	using namespace::std ;
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} ;
	for (size_t row = 0 ; row != 3 ; ++row)
		for (size_t col = 0 ; col != 4 ; ++col)
			cout << ia[row][col] ;
	cout << endl ;
	return 0;
}
