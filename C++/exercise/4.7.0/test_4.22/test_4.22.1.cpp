#include <iostream>
#include <string>

int main() { 
	using namespace::std ;
	int scores ;
	cout << "Please input a scores: " << endl ;
	cin >> scores ;
	string level = ((scores >= 90) ? "high pass" 
				       : (scores >= 75) ? "pass" 
				       : (scores >= 60) ? "low pass" : "fail") ;
	for (char c : level) 
		cout << c  ;
	cout << endl ;
	return 0 ;
}
