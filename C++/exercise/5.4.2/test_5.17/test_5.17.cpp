#include <iostream>
#include <vector>

int main() {
	using namespace::std ;
	vector<int> v1{1,1,3,5,3,7,8} ,
		    v2{1,1,3,5,3,7,8,9,5,7,4} ;
	for (auto beg = v1.begin() , beg2 = v2.begin() ; beg != v1.end() ; ) 
		if (*beg != *beg2) {
			cout << "They are the different prefix" << endl ;
			break ;
		}
		else 
			if (beg != v1.end()-1)
				++beg , ++beg2 ;
			else {
				cout << "They are the same profix" << endl ;
				break ;
			}
	return 0 ;
}
		

