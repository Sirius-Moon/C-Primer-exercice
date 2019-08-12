#include <iostream>
#include <vector>

int main()
{
	using namespace::std ;
	vector<int> v1 , v2 ;
	for (int i = 0 ; i < 10 ; ++i) {
		v1.push_back(i) ;
	}
	v2 = v1 ;
	for (auto &v : v1)
		cout << v << ' ' ;
	cout << endl ;
	for (auto &vv : v2)
		cout << vv << ' ' ;
	cout << endl ;
	return 0 ;
}
