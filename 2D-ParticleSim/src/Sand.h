#pragma once
#include "Element.h"

class Sand : public Element
{
public:
	Sand(glm::vec2 pos, Texture2D& texture);
	void Update(Element* up, Element* down, Element* left, Element* right, Element* bLeft, Element* bRight, Element* tLeft, Element* tRight) override;
};

