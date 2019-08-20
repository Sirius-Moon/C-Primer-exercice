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
				cout << "The same word is " ;
				for(char c : s2)
					cout << c ;
				cout << endl ;
				break ;
			}
		if (beg == end )
			cout << "Don't have same word!" <<endl ;
	//若return 0 ;在此处就只循环一次
	} while(1) ;
	//这里执行后发现按ctrl+D不会退出do-while循环
	return 0 ;
}
		
