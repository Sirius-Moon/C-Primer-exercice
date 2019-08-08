#include <iostream>
#include <vector>
#include <string>

int main()
{
	using std::vector ;
	using std::string ;
	string s ;
	vector<string> v ;
	while (std::cin >> s) {
	v.push_back(s) ;
	}
	for (auto j : v)
	std::cout << j << ' ' ;
	std::cout << std::endl ;
	return 0 ;
}
