#include "stdafx.h"

void Component::setParent(Component* _parent) {
	this->parent = _parent;
}

Component* Component::getParent() const {
	return parent;
}

bool Component::isComposite() const {
	return false;
}
