#include <iostream>

void reset(int &i) {
	i = 0 ;
}

int main() {
	int val = 10 ;
	reset(val) ;
	std::cout << val << std::endl ;
	return 0 ;
}
	
