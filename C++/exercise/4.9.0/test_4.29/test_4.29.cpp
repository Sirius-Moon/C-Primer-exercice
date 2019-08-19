#include <iostream>

int main() {
	using namespace::std ;
	int x[10] = {} ;
	int *p = x ;
	cout << sizeof(x)/sizeof(*x) << endl ; //输出应该为10
	cout << sizeof(p)/sizeof(*p) << endl ; //这里的含义是取int指针类型大小与int类型大小的比值
	return 0 ;
}
