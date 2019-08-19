#include <iostream>

int main() {
	using namespace::std ;
	int scores ;
	cin >> scores ;
	if (scores >= 90) 
		cout << "high pass" << endl ;
	
	else if (scores < 90 && scores > 75) 
		cout << "pass" << endl ;
	
	else if (scores <= 75 && scores >= 60) 
		cout << "low pass" << endl ;
	
	else   
		cout << "fail" << endl ;
	return 0 ;
}
