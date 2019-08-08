#include <iostream>
#include <vector>

int main()
{
	using std::vector ;
	int i ;
	vector<int> v ;
	while (std::cin >> i) {
	v.push_back(i) ;
	}
	for (auto j : v)
	std::cout << j << ' ' ;
	std::cout << std::endl ;
	return 0 ;
}
