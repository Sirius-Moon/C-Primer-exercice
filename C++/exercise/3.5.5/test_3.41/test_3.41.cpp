#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std ;
	int arr[] = {1,2,3,4,5,6} ;
	vector<int> v1(begin(arr) , end(arr)) ;
	for (auto i : v1)
		cout << i ;
	cout << endl ;
	return 0 ;
}
