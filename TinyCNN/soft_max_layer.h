#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class SoftmaxLayer : public Layer
{
public:
	SoftmaxLayer();
	virtual ~SoftmaxLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
