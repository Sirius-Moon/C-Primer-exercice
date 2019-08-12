#include <iostream>
#include <vector>

int main()
{
	using namespace::std ;
	vector<int> num{0,1,2,3,4,5,6,7,8,9} ;
	for (auto it = num.begin() ; it != num.end() ; ++it)
		*it += *it ;
	for (auto &c : num)
		cout << c << ' ' ;
	cout << endl ;
	return 0 ;
}
