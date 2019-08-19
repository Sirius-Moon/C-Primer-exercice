#include <iostream>

int main() {
	int i = 2 ;
	double d = 1.5 ;
	double j = 2.0 ;
	j *= d ;	i *= static_cast<int>(d) ;
	std::cout << i << ' ' << j ;
	std::cout << std::endl ;
}
