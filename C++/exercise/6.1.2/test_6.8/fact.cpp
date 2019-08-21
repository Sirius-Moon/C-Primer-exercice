#include "Chapter6.h"

unsigned fact(unsigned val) {
	unsigned ret = 1 ;
	if (val == 0)
		 ;
	else
		while(val != 1)
			ret *= val-- ;
	return ret ;
}
