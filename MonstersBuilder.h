#pragma once
#ifndef _MONSTERS_BUILDER_H_
#define _MONSTERS_BUILDER_H_

class Builder;
class Monster;
class Pink;
class Red;
class Blue;


class MonstersBuilder: public Builder{
private:
	Monster* monster;
public:
	MonstersBuilder();
	~MonstersBuilder();
	void reset();
	void setProduct() override;
	Monster* getProduct();
};

class PinkBuilder : public Builder {
private:
	Pink* pink;
public:
	PinkBuilder();
	~PinkBuilder();
	void reset();
	void setProduct() override;
	Pink* getProduct();
};

class RedBuilder : public Builder {
private:
	Red* red;
public:
	RedBuilder();
	~RedBuilder();
	void reset();
	void setProduct() override;
	Red* getProduct();
};

class BlueBuilder : public Builder {
private:
	Blue *blue;
public:
	BlueBuilder();
	~BlueBuilder();
	void reset();
	void setProduct() override;
	Blue* getProduct();
};

#endif