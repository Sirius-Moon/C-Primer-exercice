#include <iostream>

int compare(const int i , const int *const p) {
	return (i >= *p) ? i : *p ;
}
//这里将p定义为p指针的值不变，且p指向的元素不变
int main() {
	using namespace::std ;
	int i = 2 , j = 5 ;
	int *p = &j ;
	cout << "The bigger one is " << compare(i , p) << endl ;
	return 0 ;
}
	
