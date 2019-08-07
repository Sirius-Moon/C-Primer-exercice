#include <iostream>
#include <string>

using std::string;
string::size_type find_char(const string &s,char c,string::size_type occurs);

int main()
{
	string str;
	char a;
	std::cout << "Please input string" << std::endl;
	std::cin >> str;
	std::cout << "Please input a char that you wanted" << std::endl;
	std::cin >> a;
	string::size_type j ;
	string::size_type i = find_char(str,a,j);
	std::cout << "the " << a << " first is " << i << '\n'
		  << j << std::endl;
	return 0;
}

string::size_type find_char(const string &s,char c,string::size_type occurs)
{
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i=0 ; i != s.size() ; ++i)
	{
		if (s[i] == c)
			if (ret == s.size())
				ret = i;
			++occurs;
	}
	return ret;		
}

