#include <iostream>

unsigned absolute(int val) {
	unsigned ret = (val >= 0) ? val : -val ;
	return ret ;
}

int main() {
	int val = -5 , ret = 0 ;
	ret = absolute(val) ;
	std::cout << ret << std::endl ;
	return 0 ;
}
