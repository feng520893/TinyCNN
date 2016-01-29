#pragma once
#include "layer.h"

NAMESPACE_BEGIN;

class DataLayer : public Layer
{
public:
	DataLayer();
	virtual ~DataLayer();
public:
	virtual void forward() override;
	virtual void backward() override;
};

NAMESPACE_END;
