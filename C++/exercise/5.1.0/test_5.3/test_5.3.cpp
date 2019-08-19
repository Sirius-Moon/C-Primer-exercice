#include <iostream>

int main(int argv , char **argc) {
	int val =  0 , sum = 0;
	while ( val <= 10 )
		sum += val , ++val ;
		//sum += (++val)
	std::cout << sum << std::endl ;
	return 0 ;
}
//个人感觉可读性降低了
