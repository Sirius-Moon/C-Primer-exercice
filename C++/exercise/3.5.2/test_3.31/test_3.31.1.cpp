#include<iostream>

int main()
{
	const int array_size = 10;
	int a[array_size]={};
	int i = 0 ;
	for (auto &k : a)
		k = i++ ;
	/*for (size_t i = 0 ; i < array_size ; ++i )
		a[i]=i;*/
	for (auto j : a)
		std::cout << j << ' ';
	std::cout << std::endl;	
}
