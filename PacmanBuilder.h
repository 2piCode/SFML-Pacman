#pragma once
#ifndef _PACAMAN_BUILDER_H_
#define _PACMAN_BUILDER_H_

class Pacman;
class Builder;

class PacmanBuilder : public Builder {
private:
	Pacman* pacman;
public:
	PacmanBuilder();
	~PacmanBuilder();
	void reset();
	void setProduct() override;
	Pacman* getProduct();
};

#endif