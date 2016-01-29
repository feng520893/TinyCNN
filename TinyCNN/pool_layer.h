#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class PoolLayer : public Layer
{
public:
	PoolLayer();
	virtual ~PoolLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
