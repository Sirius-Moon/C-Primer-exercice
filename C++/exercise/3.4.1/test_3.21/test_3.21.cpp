#include <iostream>
#include <vector>
#include <string>

int main()
{
	using namespace::std ;
	vector<string> line ;
	string s ;
	while (cin >> s)
		line.push_back(s) ;
	for (decltype(line.size()) i = 0 ; i != line.size() ; ++i) { 
		for (auto it1 = line[i].begin() ; it1 != line[i].end() ; ++it1)
			*it1 = toupper(*it1) ;
	//cout << i ;
	}
	/*for (decltype(line.size()) i = 0 ; i != line.size() ; ++i) {
		for (auto &c : line[i])
			c = toupper(c);
	}*/
		
	/*for (auto &line1 : line)
		for (auto &s1 : line1)
			s1 = toupper(s1) ; */
	for (auto line2 : line)
		cout << line2 << endl;
	return 0 ;
}
