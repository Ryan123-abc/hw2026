#include "branch.h"
#include<cmath>

namespace tw{
	double with_tax(double subtotal){
		return std::round(subtotal*1.05);
	}
}

namespace hk{
	double with_tax(double subtotal){
		return subtotal;
	}
}
