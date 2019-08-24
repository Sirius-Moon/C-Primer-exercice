#include <iostream>
#include <string>

bool str_subrange(const std::string &s1 , const std::string &s2) {
	if (s1.size() == s2.size())
		return s1 == s2 ;
	auto size = (s1.size() < s2.size()) ? 
		     s1.size() : s2.size()  ;
	for (decltype(size) i = 0 ; i != size ; ++i) {
		if (s1[i] != s2[i])
			return false ;
	}
}

int main(int argv , char **argc) {
	std::string s1{"abcdef"} , s2{"abcdefcccc"} ;
	bool bl = str_subrange(s1 , s2) ;
	std::cout << bl << std::endl ;
	return 0 ;
}
