//因为我们不需要用到递增或者递减前的值
#include <iostream>
#include <vector>

int main() {
	using namespace::std ;
	vector<int> ivec(10 , 0) ;
	vector<int>::size_type cnt = ivec.size() ;
	for (vector<int>::size_type ix = 0 ; 
	                 ix != ivec.size() ; ix++ , cnt-- )
		ivec[ix] = cnt ;
	for(auto &i : ivec)
		cout << i << ' ' ;
	cout << endl ;
}
