#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class FcLayer : public Layer
{
public:
	FcLayer();
	virtual ~FcLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
