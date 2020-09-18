#include "Precompiled.h"

Rectangle::Rectangle(const std::vector<Vector2> InVertices)
{
	// ���� �����غ��ÿ�.
	for (auto it = InVertices.begin(); it != InVertices.end(); ++it)
	{
		Max.X = it->X > Max.X ? it->X : Max.X;
		Max.Y = it->Y > Max.Y ? it->Y : Max.Y;

		Min.X = it->X < Min.X ? it->X : Min.X;
		Min.Y = it->Y < Min.Y ? it->Y : Min.Y;
	}
}