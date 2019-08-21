#include <iostream>

int main() {
	using namespace::std ;
	int i , j ;
	cin >> i >> j ;
	while (cin) {
		try {
			if (j == 0) 
				throw runtime_error("the second number catnot be 0") ;
			else 
				cout << static_cast<double> (i) / j<< endl ;
				break ;
		} 
		catch (runtime_error err) {
			cout << err.what() 
		     	     << "\nPlease enter a different number for second number" << endl ;
			cin >> j ;
		}
	}
}
