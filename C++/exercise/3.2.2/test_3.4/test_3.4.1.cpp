#include <iostream>
#include <string>

int main()
{
	using namespace::std ;
	string line1 , line2 ;
	cin >> line1 >> line2 ;
	if (line1 > line2)
		cout << line1 << endl ;
	else if (line1 < line2)
		cout << line2 << endl ;
	else 
		cout << line1 << endl ;
	return 0;
}
