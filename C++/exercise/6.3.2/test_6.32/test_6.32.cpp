#include <iostream>

int &get(int *arry , int index) { 
	return arry[index] ;
}
//将ia[]元素初始化为下标的值
int main() {
	int ia[10]{} ;
	for (int i = 0 ; i != 10 ; ++i)
		get(ia , i) = i ;		//这里get函数的返回值作为左值，不可以用const引用类型。
	for (auto j : ia)
		std::cout << j << std::endl ;
	return 0 ;
}
