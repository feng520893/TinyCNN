#include <iostream>
#include "cnn.h"

using namespace TARGET_NAMESPACE;

int main(int argc, char* argv[])
{
	std::cout << "hello , tiny cnn!" << std::endl;

	CNN net;
	net.backward();
	net.forward();

	return 0;
}