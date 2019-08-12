#include <iostream>

int main() {
	using namespace::std ;
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} ;
	for (auto *p = ia ; p != ia + 3 ; ++p)		//同样不太清楚这里的类型
		for (int *q = *p ; q != *p + 4 ; ++q)
			cout << *q ;
	cout << endl ;
	return 0;
}
