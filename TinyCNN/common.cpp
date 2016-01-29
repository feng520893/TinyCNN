#include "common.h"
#include <iostream>

INNER_DETAIL_NAMESPACE_BEGIN

void assert_exp(const bool exp, const char* msg, const char* file, const char* function, const int line)
{
	if (!exp)
	{
		std::cerr << "[ERROR]:    " << msg << std::endl;
		std::cerr << "[FILE]:     " << file << " [" << line<<"]"<< std::endl;
		std::cerr << "[FUNCTION]: " << function << std::endl;
		exit(-1);
	}
}

INNER_DETAIL_NAMESPACE_END