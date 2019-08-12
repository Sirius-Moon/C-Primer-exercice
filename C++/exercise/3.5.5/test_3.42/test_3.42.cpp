#include <iostream>
#include <vector>

int main() {
	using namespace::std ;
	vector<int> v1 ;
	int arr[] = {1, 2 , 3 ,4 , 5 , 6 , 7 , 8} ;
	for (size_t i = 0 ; i != 8 ; ++i)
		v1.push_back(arr[i]);
	for (auto j : v1)
		cout << j << ' ' ;
	cout << endl ;
	return 0 ;
}
