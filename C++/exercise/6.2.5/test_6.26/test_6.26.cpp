#include <iostream>

int main(int argc , char *argv[]) {
	using namespace::std ;
	for(size_t i = 1 ; argv[i] != NULL ; ++i) 
		cout << argv[i] << ' ';
	cout << endl ;
	return 0 ;
}
