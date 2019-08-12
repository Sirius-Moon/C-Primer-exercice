#include <iostream>
#include <string>

int main()
{
	using namespace::std ;
	string test{"zjcxjnzxjn,zcjxnczjxsbvbrwyokqwij,czxbcyzxjczj'\n'abcd"} ;
	for (auto it = test.begin() ; it != test.end() && (*it) != '\n' ; ++it) {
		*it = toupper(*it) ;
		cout << *it ;
	}
	cout << endl ;
	return 0;
}
