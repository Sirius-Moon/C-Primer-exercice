#include <iostream>
#include <vector>

int main()
{
	using namespace::std ;
	vector<int> grade(11,0) ;
	unsigned igrade ;
	while (cin >> igrade)
	{
		if (igrade <= 100)
			++*(grade.begin()+igrade/10);
	}
	/*auto beg = grade.begin() ;
	while (cin >> igrade) {
		beg += igrade / 10 ;
		*beg += 1 ;
	beg = grade.begin() ;
	}
	for (auto &c : grade)
		cout << c << ' ';
	cout << endl ;*/
	return 0 ;

}
