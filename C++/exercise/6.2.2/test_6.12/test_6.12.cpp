#include <iostream>
//使用引用更好理解一些
void exchange(int &val1 , int &val2) {
	int val = 0 ;
	val = val1 ;
	val1 = val2 ;
	val2 = val ;
}

int main() {
	using namespace::std ;
	int i = 1 , j = 2 ;
	exchange(i , j) ;
	cout << i << ' ' << j << endl ;
	return 0 ;
}
