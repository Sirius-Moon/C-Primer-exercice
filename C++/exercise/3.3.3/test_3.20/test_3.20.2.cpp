#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace::std ;
	vector<int> line ;
	vector<int> sum ;
	int i = 0 ;
	int isum = 0 ;
	while (cin >> i)
		line.push_back(i) ;
	for (decltype(line.size()) j = 0 ; j < (line.size()/2) ; ++j) {
		isum = line[j] + line[line.size()-1-j] ;
		sum.push_back(isum) ;
	}
	for (auto k : sum)
		cout << k << ' ' ;
	cout << endl ;
	return 0;
}
