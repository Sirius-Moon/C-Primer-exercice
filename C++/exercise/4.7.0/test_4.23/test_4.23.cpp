#include <iostream>
#include <string>

int main() {
	using namespace::std ;
	string s = "work" ;
	string p1 = s + ((s[s.size() - 1] == 's' ) ? "" : "s") ;
	for (auto c : p1)
		cout << c ;
	cout << endl ;
	return 0 ;
}
