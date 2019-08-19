#include <iostream>
#include <string>

int main(int argv , char **argc) {
	using namespace::std ;
	const string s[] = {"A" , "B" , "C" , "D" , "F" , "S"} ;
	int score ;
	cout << "Please enter a score" << endl ;
	cin >> score ;
	(score <= 60) ? cout << s[5] << endl  
		      : (score == 100) ? cout << s[6] << endl 
				       : cout << s[9-score/10] ;
	(score % 10 <= 3) ? cout << '-' << endl 
			  : (score % 10 >= 7) ? cout << '+' << endl 
			  : cout << endl ;
	return 0 ;
	}
