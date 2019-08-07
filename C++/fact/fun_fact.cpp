#include "fun_fact.h"

int fact(int var)
{
	int ret = 1;
	while (var > 1)
	ret *= var--;
	return ret; 
}
