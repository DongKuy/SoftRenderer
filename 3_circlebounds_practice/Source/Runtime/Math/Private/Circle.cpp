
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	for (auto it = InVertices.begin(); it != InVertices.end(); ++it)
	{
		Center += *it;
	}
	Center /= InVertices.size();
	Radius = (*std::max_element(InVertices.begin(), InVertices.end(),
		[&](Vector2 const& InLeft, Vector2 const& InRight)
		{
			return (Center - InLeft).SizeSquared() < (Center - InRight).SizeSquared();
		}
	)).Size();
}