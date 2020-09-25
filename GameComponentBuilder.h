#pragma once
#ifndef _GAMECOMPONENT_BUILDER_H_
#define _GAMECOMPONENT_BUILDER_H_

class Builder;
class GameComponent;

class GameComponentBuilder : public Builder {
private:
	GameComponent* components;
public:
	GameComponentBuilder();
	~GameComponentBuilder();
	void reset();
	void setProduct() override;
	GameComponent* getProduct();
};

#endif