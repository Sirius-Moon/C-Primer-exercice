#include <iostream>
#include <vector>
#include <string>

const std::string str_out(std::vector<std::string> const sv , decltype(sv.size()) i) {
	if(i != 0) {
		std::cout << "sv[" << i << "] = " << sv[--i] << std::endl ;
		str_out(sv , i) ;
	}
	return sv[0] ;
}

int main() {
	std::vector<std::string> s1{"abcd" ,"bcdb" ,"bczybd", "uhfdb"} ;
	str_out(s1 , s1.size())  ;
	return 0 ;
}	
