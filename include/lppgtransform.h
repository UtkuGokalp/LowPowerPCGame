#ifndef LPPGTRANSFORM_H
#define LPPGTRANSFORM_H

#include <lppgmath.h>

namespace lppg
{
	struct Transform
	{
		lppg::Vector2 position;
		float angle; //Rotation on z-axis
		lppg::Vector2 scale;
	};
}

#endif
