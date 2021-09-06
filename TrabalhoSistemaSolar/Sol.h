#pragma once
#include <GL\freeglut.h>
#include "Orbita.h"
class Sol : public Orbita
{
	public:
		Sol(float radius);
		GLint x, y;
		void draw();
};

