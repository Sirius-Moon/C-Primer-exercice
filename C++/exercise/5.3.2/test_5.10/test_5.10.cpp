#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std ;
	vector<char> s1 ;
	char s ;
	int aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
	while (cin >> s && s != '1') 
		s1.push_back(s) ;
	for (auto c = s1.begin() ; c != s1.end() ; ++c)
		switch(*c) {
			case 'a':
			case 'A':
				++aCnt ;
				break ;
			case 'e':
			case 'E':
				++eCnt ;
				break ;
			case 'i':
			case 'I':
				++iCnt ;
				break ;
			case 'o':
			case 'O':
  				++oCnt ;
				break ;
			case 'u':
			case 'U':
				++uCnt ;
				break ;
			default :
				;
		}	
	cout << aCnt << ' ' << eCnt << ' ' << iCnt << ' ' << oCnt << ' ' << uCnt << endl ;
	return 0 ;
}
