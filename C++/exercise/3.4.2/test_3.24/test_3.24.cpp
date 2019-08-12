#include <iostream>
#include <vector>

int main()
{
	using namespace::std ;
	vector<int> line ; 
	vector<int> sum ;
	int i ;
	while (cin >> i)
		line.push_back(i);
	auto beg = line.begin() ;
	auto end = line.end() ;
	int j = 1 ;
	int isum ;
	while (beg < end) {
		end -= j ;
		isum = *beg + *end ;
		beg += j ;
		sum.push_back(isum) ;
	}
	for (auto &c : sum)
		cout << c << ' ' ;
	cout << endl ;
	return 0 ;
}
