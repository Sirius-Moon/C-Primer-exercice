#include <iostream>

int main ()
{
	using namespace::std ;
	const char ca[] = "hello" ;
	//const char ca[] = { 'h' , 'e' , 'l' , 'l' , 'o' , '\0'} ;
	//此处应该在后面加一个‘\0’，不然输出不确定！
	//或按照 ca[]=“hello”； 定义。
	const char *cp = ca ;
	while (*cp) {
		cout << *cp << endl ;
		++cp ;
	}
	return 0 ;
}
