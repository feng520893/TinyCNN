#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class ReluLayer : public Layer
{
public:
	ReluLayer();
	virtual ~ReluLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
