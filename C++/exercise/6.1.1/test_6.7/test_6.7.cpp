#include <iostream>
size_t count_calls() {
	static size_t ctr = 0 ;
	return ctr++ ;
}

int main() {
	for (int i ; i != 10 ; ++i)
		std::cout << count_calls() << std::endl ;
	return 0 ;
}
		
	
