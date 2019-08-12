#include <iostream>
#include <cstring>

int main()
{
	using namespace::std ;
	const char ca1[] = "abcdef" ;
	const char ca2[] = "aibcdef" ;
	if (strcmp(ca1 , ca2) == 0)
		return 0 ;
	else
		return -1 ;
}
