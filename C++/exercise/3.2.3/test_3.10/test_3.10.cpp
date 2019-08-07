#include <iostream>
#include <string>

int main()
{
	using namespace::std ;
	string s ;
	cin >> s ;
	for (auto &c : s)
		if (!ispunct(c))
			cout << c ;
	cout << endl;
	return 0 ;
}
