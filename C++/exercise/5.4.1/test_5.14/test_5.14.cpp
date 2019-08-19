#include <iostream>
#include <vector>
#include <string>

int main() {
	using namespace::std ;
	vector<string> wvctr ;
	string wstr{} , s{} , smax{} ;
	unsigned Cnt = 0 , CntMax = 0 ; 
	while(cin >> wstr && wstr != "1")
		wvctr.push_back(wstr) ;
	for(auto beg = wvctr.begin() ; beg != wvctr.end() ; ++beg) {
		if (s == *beg)
			++Cnt ;
		else 
			s = *beg , Cnt = 1 ; 
		if (Cnt > CntMax) {
			CntMax = Cnt ;
			smax = s ;
		}
	//cout << ++Cnt << endl ;
	}
	if (CntMax == 1)
		cout << "No words have appeared consecutively" << endl ;
	else {
		for (char c : smax) 
			cout << c ;
		cout << endl ;
		cout << CntMax <<endl ;
	}
	return 0 ;
} 
			
