#include <iostream>

unsigned fact(unsigned val) {
	unsigned ret = 1 ;
	if (val == 0)
		 ;
	else
		while(val != 1)
			ret *= val-- ;
	return ret ;
}

int main() {
		using namespace::std ;
		unsigned val , ret ;
		cin >> val ;
		ret = fact(val) ;
		cout << val << "! = " << ret << endl ;
		return 0 ;
}
