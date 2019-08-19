#include <iostream>
#include <string>

int main (int argv , char **argc) {
	using namespace::std ;
	const string s[] = {"A" , "B" , "C" , "D" , "E" , "F" , "S"} ;
	int score ;
	cout << "Please enter a score" << endl ;
	cin >> score ;
	if (score < 60)
		cout << s[5] << endl ;
	else if (score == 100 )
		cout << s[6] << endl ;
	else {
		cout << s[9-score/10] ;
		if (score%10 <= 3)
			cout << '-' << endl ;
		else if (score%10 >= 7)
			cout << '+' << endl ;
		else 
			cout << endl ;
	}
	return 0 ;
}
