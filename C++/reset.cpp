#include <iostream>

void reset(int *var);

void reset(int *var)
{
	var = 0;
	//*var = 20;
}

main()
{
	int i = 42;
	reset( &i );
	std::cout << i << std::endl; 
	return 0;
}
