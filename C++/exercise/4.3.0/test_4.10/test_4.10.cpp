#include <iostream>
#include <vector>

int main() {
	using namespace::std ;
	vector<int> v ;
	int i ;
	while (cin >> i && i != 42) 
		v.push_back(i) ;
	for (auto &j : v)
		cout << j << ' ' ;
	cout << endl ;
	return 0 ;
}
