#include <iostream>
#include <string>
#include <cstring>

int main() {
	using namespace::std ;
	char s1[10] = {} ;
	char s2[10] = {} ;
	char s5[20] = {} ;
	char s6[20] = {} ;
	string s3 = "abcdef" ;
	string s4 = "ABCDEF" ;
	for (size_t i = 0 ; i != 6 ; ++i) {
		s1[i] = s3[i] ;
		s5[i] = s1[i] ;
		s2[i] = s4[i] ;
	}
	int k = 0 ;
	for (int j = 0 ; j != (s3.size() + s4.size()); ++j) 
		if (s5[j] == '\0' )
			s5[j] = s2[k++] ;
	for (auto m : s5)
		cout << m ;
	cout << endl ;
	strcpy(s6 , s1) ;
	strcat(s6 , s2) ;
	for (auto n : s6)
		cout << n ;
	cout << endl ;
	return 0 ;
}
