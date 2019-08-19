#include <iostream>
#include <vector>

int main() {
	using namespace::std ;
	vector<int> v1 , v2 ;
	int i , j ;
	while (cin >> i )
		v1.push_back(i) ;
	for (auto iter = v1.begin() ; iter != v1.end() ; iter++ ) {
		j = (*iter % 2 == 0 ) ? *iter = *iter : *iter *=  2 ;	
		v2.push_back(j) ;
	}
	for(auto &o : v2)
		cout << o << ' ' ;
	cout << endl ;
	return 0 ;
}
