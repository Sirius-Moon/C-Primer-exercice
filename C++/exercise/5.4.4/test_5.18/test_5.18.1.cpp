#include <iostream>

int main() {
	using namespace::std ;
	//将do后面语句用花括号括起来，变为块
	do {
		int v1 , v2 ;
		cout << "Please enter two numbers ts sum: " << endl ;
		if (cin >> v1 >> v2)
			cout << "Sum is: " << v1 + v2 << endl ;
	}
	while(cin);
}
