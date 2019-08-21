#include <iostream>

unsigned fact(unsigned val) {			//val形参
	unsigned ret = 1 ;			//ret,val 局部变量
	static size_t Cnt = 0 ;
	++Cnt ;					//记录被调用次数
	if (val == 0)
		 ;
	else
		while(val != 1)
			ret *= val-- ;
	return Cnt ;
}

int main() {
		using namespace::std ;
		unsigned val1 , val2 , ret ;
		cin >> val1 ;
		ret = fact(val1) ;		//第一次调用
		ret = fact(val2) ;		//第二次调用
		cout << "The number of times called is " << ret << endl ;
		return 0 ;
}
