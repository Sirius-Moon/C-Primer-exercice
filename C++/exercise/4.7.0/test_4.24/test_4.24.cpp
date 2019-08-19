#include <iostream>
#include <string>

int main() {
	using namespace::std ;
	int scores ;
	cin >> scores ;
	string level = (scores < 60 ) ? "fail" 
				      : (scores > 90) ? "high pass" : "pass"  ;
	for (auto c : level)
		cout << c ;
	cout << endl ;
}
