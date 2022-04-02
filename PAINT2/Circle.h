#pragma once 
#include "Ellipse1.h"

class Circle : public Ellipse1
{
DECLARE_SERIAL(Circle)
public:
	Circle() {};
	Circle(CPoint x_1, CPoint y_1) : Ellipse1(x_1, y_1 ) {};
	void Draw(CDC* dc);
};

