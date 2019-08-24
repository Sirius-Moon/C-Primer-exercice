#include <iostream>
#include <vector>

int sum(std::initializer_list<int> iz) {
	int su = 0 ;
	for (auto i : iz)
		su += i ;
	return su ;
}

int main() {
	int su = 0 ;
	su = sum({1,2,3,4,5,6,7}) ;
	std::cout << su << std::endl ;
	return 0 ;
}
