#include <iostream>

int factorial(const int val) {
	if (val != 0)
		return factorial(val-1)*val ;
	return 1 ;
}

int main() {
	std::cout << factorial(5) << std::endl ;
	return 0 ;
}
