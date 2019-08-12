#include <iostream>
#include <vector>

int main()
{
	using namespace::std ;
	vector<char> s1 ,s2 ;
	char c1 , c2 ;
	cout << "Please input a string" << endl ;
	while (cin >> c1 && c1 != '1')
		s1.push_back(c1) ;
	cout << "Please input another string" << endl ;
	while (cin >> c2 && c2 != '1')
		s2.push_back(c2) ;
	if (s1 == s2)
		cout << "there are same string" << endl ;
	else
		cout << "there are different string" << endl ;
	return 0 ;
}
