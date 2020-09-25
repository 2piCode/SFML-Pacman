#pragma once
#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder {
public:
	virtual ~Builder() {}
	virtual void setProduct() = 0;
};

#endif