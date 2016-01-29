#include "layer.h"

NAMESPACE_BEGIN;

void Layer::reshape(const int channels, const int rows, const int cols)
{
	ASSERT_EXP(channels > 0 && rows > 0 && cols > 0, "params not support!");

	const auto dataSize = channels*rows*cols;
	m_data.resize(dataSize);
	m_channels = channels;
	m_rows = rows;
	m_cols = cols;
}

NAMESPACE_END;