#include <iostream>

int main() {
	using namespace::std ;
	int a[] = {1,2,3,4,5,6,7,8} ;
	for (int *p = a ; p != a+8 ; ++p)
		cout << *p ;
	cout << endl ;
	int *p1 = a ;
	while(p1 != a+8)
		cout << *p1 , ++p1 ;
	cout << endl ;
	return 0 ;
}
//若只选择一个，我觉得while适用的范围更广一点
