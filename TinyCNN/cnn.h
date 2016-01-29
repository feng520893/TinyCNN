#pragma once
#include "layer.h"
#include <vector>
#include <memory>

NAMESPACE_BEGIN;

class CNN
{
public:
	CNN();
	virtual ~CNN();
public:
	//////////////////////////////////////////////////////////////////////////
	//predict
	void feedInputData(const uint8_t* data, const int channels, const int rows, const int cols);
	void forward();

	//////////////////////////////////////////////////////////////////////////
	//train
	void backward();
private:
	std::vector<std::shared_ptr<Layer>> layers;
};

NAMESPACE_END;
