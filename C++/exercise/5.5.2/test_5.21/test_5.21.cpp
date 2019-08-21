#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace::std ;
	do {
		vector<string> vs1{} ;
		string s1{} , s2{} , s3{} ;
		cout << "Please enter a string" << endl ;
		while (cin >> s1 && s1 != "1")
			vs1.push_back(s1) ;
		auto beg = vs1.begin() ;
		auto end = vs1.end() ;
		while (beg != end)
			if (s2 != *beg )
				s2 = *beg , ++beg ;
			else {
				if (s2[0] >= 'A' && s2[0] <= 'Z') {
					cout << "The same word is " ;
					for(char c : s2)
						cout << c ;
					cout << endl ;
					break ;
				}
				else {
					++beg ;
					continue ;
				}
			}
		if (beg == end )
			cout << "Don't have same word!" <<endl ;
	//若return 0 ;在此处就只循环一次
	} while(cin) ;
	//括号里写1执行后发现按ctrl+D不会退出do-while循环
	//括号里写cin执行结果正常一点
	return 0 ;
}
		
