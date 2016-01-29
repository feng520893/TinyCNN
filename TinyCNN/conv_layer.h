#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class ConvLayer : public Layer
{
public:
	ConvLayer();
	virtual ~ConvLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
