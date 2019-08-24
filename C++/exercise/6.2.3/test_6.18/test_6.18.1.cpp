#include <iostream>

bool compare(const int (&a1)[5] , const int (&a2)[5]) {
	int i = 0 ;
	while (i != 5) {
		if(a1[i] == a2[i])
			;
		else {
			return false ;
			break ;
		}
		++i ;
	}
	if (i == 5)
		return true ;
	}

int main() {
	using namespace::std ;
	int a1[5] = {1,3,3,4,5} ;
	int a2[5] = {1,2,3,4,5} ;
	bool bl = compare(a1 , a2) ;
	if (bl == true)
		cout << "There are same matrix" << endl ;
	else
		cout << "There are not same matrix" << endl ;
	return 0 ;
}
			
	
