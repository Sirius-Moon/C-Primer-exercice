#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std ;
	vector<string> s1 ;
	char a ;
	unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
	unsigned spaceCnt = 0 , enterCnt = 0 , tabCnt = 0 ;
	cin.get(a) ;
	while (a != '1') { 
		switch(a) {
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
			case '\t':
				++tabCnt ;
				break ;
			case '\n':
				++enterCnt ;
				break ;
			case ' ' :
				++spaceCnt ;
				break ;
			default :
				;
		}
		cin.get(a) ;
	}
	cout << aCnt << ' ' << eCnt << ' ' << iCnt << ' ' << oCnt << ' ' << uCnt 
	     << ' ' << spaceCnt << ' ' << enterCnt << ' ' << tabCnt << ' ' << endl ;
	return 0 ;
}
