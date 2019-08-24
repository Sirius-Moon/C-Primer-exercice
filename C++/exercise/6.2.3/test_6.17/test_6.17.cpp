#include <iostream>
#include <string>

void capital(const std::string &s) {
	using namespace::std ;
	for(auto beg = s.begin() ; beg != s.end() ; ++beg) {
		if (isupper(*beg)){
			cout << "The string have capital letter" << endl ;
			break ;
}
		else if (beg == s.end() - 1)
			cout << "The string don't have capital letter" <<endl ;
	}
}

void upletter(std::string &s) {
	for(char &c : s)
		c = toupper(c)	;
}

int main() {
	using namespace::std ;
	string s{"abcd"} ;
	for (char c1 : s)
		cout << c1 ;
	cout << endl ;
	capital(s) ;
	upletter(s) ;
	for (char c2 : s)
		cout << c2 ;
	cout << endl ;
	return 0 ;
}
		

