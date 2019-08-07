#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace::std;
	const unsigned i = 100 ;
	string s , s1 , s2 , s3 , s4 ;
	string s5[i] = {} ;
	cin >> s1 >> s2 >> s3 >> s4 ;
	s = s1 + ' ' + s2 + ' ' + s3 + ' ' + s4 ;
	cout << s << endl;
	//这里要使用引用才能改大小写，切记！！
	for (char &c : s)
		c = toupper(c) ;
	cout << s << endl;
	/*	if (c <= 'z' && c >= 'a')
			cout << toupper(c) ;
		else 
			cout <<  c ;
	} 
	cout << endl ; 
		unsigned j = 0 ;
		if (c <= 'z' && c >= 'a')
			s5[j++] = (c-32);
		else 
			s5[j++] =   c ;
	}	
	for (int k = 0 ; s[k] != '\0' ; ++k)
		cout << s[k]; 
	cout << endl; */
	return 0;
}
