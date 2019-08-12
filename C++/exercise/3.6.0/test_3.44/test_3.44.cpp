#include <iostream>

int main() {
	using namespace::std ;
	//int ia[12] = {1,2,3,4,5,6,7,8,9,10,11,12} ;
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} ;
	for (auto &row : ia)			//这个类型不太懂！
		for(int &col : row)
			cout << col ;
	//for (int col : ia)
	//	cout << col ;
	cout << endl ;
	return 0 ;
}
