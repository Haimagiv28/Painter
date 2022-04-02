#include "pch.h"
#include "Circle.h"
IMPLEMENT_SERIAL(Circle, Ellipse1, 1)

void Circle::Draw(CDC * dc)
{
	CPen myPen2(PS_SOLID, 3, RGB(255, 0, 0));
	CPen* old = dc->SelectObject(&myPen2);
	dc->Ellipse(p1.x, p1.y, p2.x, p2.y);
	dc->SelectObject(old);
}
