#pragma once
#include "common.h"
#include <vector>

NAMESPACE_BEGIN;

class Layer
{
public:
	virtual void forward() = 0;
	virtual void backward() = 0;
public:
	void reshape(const int channels, const int rows, const int cols);
protected:
	std::vector<uint8_t> m_data;
	int m_channels = 0;
	int m_rows = 0;
	int m_cols = 0;
};

NAMESPACE_END;