#pragma once
#ifndef _GAMECOMPONENT_BUILDER_H_
#define _GAMECOMPONENT_BUILDER_H_

class Builder;
class GameComponent;

class GameClassBuilder : public Builder {
private:
	GameComponent* components;
public:
	GameClassBuilder();
	void reset();
	void setProduct() override;
};

#endif