#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std;
	vector<string> s1 ;
	string c ;
	unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
	while (cin >> c && c != "1")
		s1.push_back(c) ;
	for (auto c1 = s1.begin() ; c1 != s1.end() ; ++c1) {
		if (*c1 == "a")
			++aCnt ;
		else if (*c1 == "e")
			++eCnt ;
		else if (*c1 == "i")
			++iCnt ;
		else if (*c1 == "o")
			++oCnt ;
		else if (*c1 == "u")
			++uCnt ;
	}
	cout << aCnt << ' ' << eCnt << ' ' << iCnt << ' ' << oCnt << ' ' << uCnt << endl ;
	return 0 ;
}
